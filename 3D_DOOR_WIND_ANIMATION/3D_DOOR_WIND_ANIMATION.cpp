// 3D_DOOR_WIND_ANIMATION.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "glut.h"

#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 800
#define PROJECT_NAME "3D Door Animation"




void mainDisplayFunc() {

}



void keyboardUpHandler(unsigned char key, int x, int y) {

}

void keyboardHandler(unsigned char key,int x, int y) {

}


void mouseHandler(int button,int state,int x, int y) {

}


int main(int argc, char** argv)
{

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(SCREEN_WIDTH, SCREEN_HEIGHT);
	glutCreateWindow(PROJECT_NAME);
	glutDisplayFunc(mainDisplayFunc);
	glutKeyboardFunc(keyboardHandler);
	glutKeyboardUpFunc(keyboardUpHandler);
	glutMouseFunc(mouseHandler);
	glutMainLoop();
    return 0;
}

