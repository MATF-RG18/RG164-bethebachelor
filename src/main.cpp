#include <stdio.h>
#include <GL/glut.h>
#include <time.h>
#include "callbackfuncs.hpp"



void init(int , char**);

int main(int argc, char** argv) {
    init(argc, argv);
    init_callbacks();

    glutMainLoop();
    return 0;
}

void init(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH | GLUT_DOUBLE);
    srand((unsigned)time(nullptr));

    glutInitWindowSize(600, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow(argv[0]);

    glClearColor(0, 0, 0, 0);
    glEnable(GL_DEPTH_TEST);
}

