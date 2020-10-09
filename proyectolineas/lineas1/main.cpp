#include <windows.h>
#include <GL\glut.h>

void inicio(){
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-1000,1000,-1000,1000);
    glClearColor(0.0,0.0,0.0,0.0);
}

void pantalla{
    glClear(GL_COLOR_BUFFER_BIT);

    glcolor3f(1.0, 0.0, 0.0);
    glBegin(GL_LINES);

    glVertex2i(4, 4); glvertex2i(-4, 4);
    glVertex2i(-4, 4); glvertex2i(-4, -4);
    glVertex2i(-4, -4); glvertex2i(4, -4);
    glVertex2i(4, -4); glvertex2i(4, 4);
    glVertex2i(8, 8); glvertex2i(-8, 8);
    glVertex2i(-8, 8); glvertex2i(-8, -8);
    glVertex2i(-8, -8); glvertex2i(8, -8);
    glVertex2i(8, -8); glvertex2i(8, 8);
    glVertex2i(12, 12); glvertex2i(-12, 12);
    glVertex2i(-12, 12); glvertex2i(-12, -12);
    glVertex2i(-12, -12); glvertex2i(12, -12);
    glVertex2i(12, -12); glvertex2i(12, 12);
    glVertex2i(16, 16); glvertex2i(-16, 16);
    glVertex2i(-16, 16); glvertex2i(-16, -16);
    glVertex2i(-16, -16); glvertex2i(16, -16);
    glVertex2i(16, -16); glvertex2i(16, 16);
    glVertex2i(20, 20); glvertex2i(-20, 20);
    glVertex2i(-20, 20); glvertex2i(-20, -20);
    glVertex2i(-20, -20); glvertex2i(20, -20);
    glVertex2i(20, -20); glvertex2i(20, 20);
    glVertex2i(24, 24); glvertex2i(-24, 24);
    glVertex2i(-24, 24); glvertex2i(-24, -24);
    glVertex2i(-24, -24); glvertex2i(24, -24);
    glVertex2i(24, -24); glvertex2i(24, 24);
    glVertex2i(28, 28); glvertex2i(-28, 28);
    glVertex2i(-28, 28); glvertex2i(-28, -28);
    glVertex2i(-28, -28); glvertex2i(28, -28);
    glVertex2i(28, -28); glvertex2i(28, 28);
    glVertex2i(32, 32); glvertex2i(-32, 32);
    glVertex2i(-32, 32); glvertex2i(-32, -32);
    glVertex2i(-32, -32); glvertex2i(32, -32);
    glVertex2i(32, -32); glvertex2i(32, 32);
    glVertex2i(36, 36); glvertex2i(-36, 36);
    glVertex2i(-36, 36); glvertex2i(-36, -36);
    glVertex2i(-36, -36); glvertex2i(36, -36);
    glVertex2i(36, -36); glvertex2i(36, 36);
    glVertex2i(40, 40); glvertex2i(-40, 40);
    glVertex2i(-40, 40); glvertex2i(-40, -40);
    glVertex2i(-40, -40); glvertex2i(40, -40);
    glVertex2i(40, -40); glvertex2i(40, 40);

    glEnd();

    glFlush();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640,480);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_SINGLE);
    glutCreateWindow("primer programa");
    inicio();

    glutDisplayFunc(pantalla);
    glutMainLoop();

    return EXIT_SUCCESS;
}
