
#include <GL/glut.h>
#include <stdio.h>

float counter = 0.0;

void display(){
    glClear(GL_COLOR_BUFFER_BIT);
    //use modified color to overdraw color


    glLoadIdentity();
    /*
    glTranslatef(counter/2000, -0.3, 0.0);
    glRotatef(counter, 0.0, 1.0, 0.0);

    counter += 1;

    if(counter > 1700)
        counter = 0.0;
        */

    glBegin(GL_POLYGON);

            //triangle color
            glColor3f(0.0, 1.0, 0.0);
            glVertex3f(-0.5, -0.5, -1.0);

            glColor3f(1.0, 0.0, 0.0);
            glVertex3f(-0.5, 0.5, -1.0);

            glColor3f(0.0, 0.0, 1.0);
            glVertex3f(0.5,  0.5, -1.0);

            glColor3f(0.0, 0.0, 1.0);
            glVertex3f(0.5,  -0.5, -1.0);

    glEnd();

    //2 triangle
    glLoadIdentity();
    //degree, vector (self-or something
    glTranslatef(-0.5, -0.8, 0.0);
    glRotatef(75, 0.0, 1.0, 0.0);


    glBegin(GL_TRIANGLES);

            //triangle color
            glColor3f(1.0, 1.0, 1.0);
            glVertex3f(-0.9, -0.1, 0.0);

            glColor3f(0.0, 0.0, 1.0);
            glVertex3f(0.1, -0.1, 0.0);

            glColor3f(0.0, 1.0, 1.0);
            glVertex3f(-0.5, 0.9, 0.0);

    glEnd();


    //double buffering (error)
    glutSwapBuffers();
}

void reshape(int w, int h){
    glViewport(0, 0, w, h);
    // 0, 0, : start in the lower left corner
    //w and h - draws in the entire width and entire height
}

void initOpenGL(){
    //background color
    glClearColor(1.0, 1.0, 1.0, 1.0);
}


int main(int argc, char **argv){

    //start glut
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(1100, 300);
    glutCreateWindow("openGL App");

    initOpenGL();

    glutDisplayFunc(display);
    glutIdleFunc(display);
    glutReshapeFunc(reshape);
    glutMainLoop();

    return 0;
}
