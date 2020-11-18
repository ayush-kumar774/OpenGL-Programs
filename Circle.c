#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
#define pi 3.142857

//g++ Circle.c -lglut -lGL -lGLEW -lGLU -o Circle

void myInit (void)
{
	glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
	glColor3f(1.0f, 0.5f, 0.2f);
	glPointSize(1.0);
	glMatrixMode(GL_PROJECTION); 
	glLoadIdentity();
	gluOrtho2D(-780, 780, -420, 420);
}

void display (void) 
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POINTS);
	float x, y, i;
	for ( i = 0; i < (2 * pi); i += 0.001)
	{
		x = 200 * cos(i);
		y = 200 * sin(i);
		
		glVertex2i(x, y);
	}
	glEnd();
	glFlush();
}

int main (int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1366, 768);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Circle Drawing");
	myInit();
	glutDisplayFunc(display);
	glutMainLoop();
}




