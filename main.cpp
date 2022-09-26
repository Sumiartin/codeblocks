#include <windows.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <math.h>

void display(void)
{
glClearColor (0.0f, 0.0f, 0.0f, 0.0f);
glClear (GL_COLOR_BUFFER_BIT);

glPushMatrix ();
glClearColor(1,1,1,0);
glColor3f(0,0,1);
glLineWidth(5);
glBegin(GL_LINES);
glVertex3f(-0.6f, 0.0f, 0.0f);
glVertex3f(0.6f, 0.0f, 0.0f);
glEnd ();
glFlush();
}

int main(int argc, char **argv)
{
glutInit(&argc, argv);
glutCreateWindow("GARIS");
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
