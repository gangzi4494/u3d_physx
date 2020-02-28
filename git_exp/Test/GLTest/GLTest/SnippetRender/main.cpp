#define GLUT_DISABLE_ATEXIT_HACK 
#include <gl\glut.h>


//void myDisplay(void)
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//
//
//
//	glRectf(-0.5f, -0.5f, 0.5f, 0.5f);
//	glFlush();
//}

#include "SnippetRender.h"

using namespace Snippets;

void renderCallback()
{
	glRectf(-0.5f, -0.5f, 0.5f, 0.5f);
	/*glColor3f(0.9f, 0.9f, 0.9f);
	glBegin(GL_QUADS);
	glVertex3f(-100.0f, 0.0f, -100.0f);
	glVertex3f(-100.0f, 0.0f, 100.0f);
	glVertex3f(100.0f, 0.0f, 100.0f);
	glVertex3f(100.0f, 0.0f, -100.0f);
	glEnd();*/

	//glFlush();
	//glutSwapBuffers();//双缓冲
	finishRender();
}

int main(int argc, char *argv[])
{
	/*glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(400, 400);
	glutCreateWindow("第一个OpenGL程序");


	glutDisplayFunc(&myDisplay);

	glutMainLoop();*/

	setupDefaultWindow("hello");
	//setupDefaultRenderState();

	glutDisplayFunc(renderCallback);

	glutMainLoop();


	return 0;
}