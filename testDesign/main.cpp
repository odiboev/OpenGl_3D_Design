
#include <GL/glut.h>
#include <stdio.h>

void display(){
}

void reshape(int w, int h){
    glViewport(0, 0, w, h);
    // 0, 0, : start in the lower left corner
    //w and h - draws in the entire width and entire height
}

void initOpenGL(){
    glClearColor(0.0, 0.0, 0.0, 1.0);
}


int main(int argc, char **argv){

    //start glut
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("openGL App");

    glutDisplayFunc(display);
    glutIdleFunc(display);
    glutReshapeFunc(reshape);
    glutMainLoop();

    return 0;
}
