// 3D_DOOR_WIND_ANIMATION.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "glut.h"

#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 800
#define PROJECT_NAME "3D Door Animation"


void drawDoor(float width, float height, float breadth) {
	glBegin(GL_POLYGON);
	glVertex3f(0, 0, 0);
	glVertex3f(width, 0, 0);
	glVertex3f(width, 0, -breadth);
	glVertex3f(0, 0, -breadth);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(0, height, 0);
	glVertex3f(width, height, 0);
	glVertex3f(width, height, -breadth);
	glVertex3f(0, height, -breadth);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(0, 0, 0);
	glVertex3f(0, 0, -breadth);
	glVertex3f(0, height, -breadth);
	glVertex3f(0, height, 0);
	glEnd();


	glBegin(GL_POLYGON);
	glVertex3f(width, 0, 0);
	glVertex3f(width, 0, -breadth);
	glVertex3f(width, height, -breadth);
	glVertex3f(width, height, 0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(0, 0, 0);
	glVertex3f(width, 0, 0);
	glVertex3f(width, height, 0);
	glVertex3f(0, height, 0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(0, 0, -breadth);
	glVertex3f(width, 0, -breadth);
	glVertex3f(width, height, -breadth);
	glVertex3f(0, height, -breadth);
	glEnd();



}





void mainDisplayFunc() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glColor3f(0.7, 0.7, 0.7);
	gluLookAt(50, 50, 50, 0, 0, 0, 0, 1, 0);
	//gluPerspective();
	drawDoor(10.0,50.0,3.0);

	glFlush();
	glutSwapBuffers();
}



void keyboardUpHandler(unsigned char key, int x, int y) {

}

void keyboardHandler(unsigned char key, int x, int y) {

}


void mouseHandler(int button, int state, int x, int y) {

}

void initGL() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClearDepth(1.0f);                   // Set background depth to farthest
	glEnable(GL_DEPTH_TEST);   // Enable depth testing for z-culling
	glDepthFunc(GL_LEQUAL);    // Set the type of depth-test
	glShadeModel(GL_SMOOTH);   // Enable smooth shading
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);  // Nice perspective corrections
}
int main(int argc, char** argv)
{

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB|GLUT_DEPTH);
	glEnable(GL_DEPTH_TEST);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(SCREEN_WIDTH, SCREEN_HEIGHT);
	glutCreateWindow(PROJECT_NAME);
	glutDisplayFunc(mainDisplayFunc);
	glutKeyboardFunc(keyboardHandler);
	glutKeyboardUpFunc(keyboardUpHandler);
	glutMouseFunc(mouseHandler);
	initGL();
	glutMainLoop();
	return 0;
}

