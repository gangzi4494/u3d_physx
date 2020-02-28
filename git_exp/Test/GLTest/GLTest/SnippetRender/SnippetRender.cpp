#include "SnippetRender.h"


namespace Snippets
{

	namespace
	{
		void reshapeCallback(int width, int height)
		{
			glViewport(0, 0, width, height);
		}
	}

	void myDisplay(void)
	{
		glClear(GL_COLOR_BUFFER_BIT);
	
	
	
		glRectf(-0.5f, -0.5f, 0.5f, 0.5f);

		//glFlush();
		glutSwapBuffers();//双缓冲

	}

	void setupDefaultWindow(const char *name)
	{
		char* namestr = new char[strlen(name) + 1];
		strcpy(namestr, name);
		int argc = 1;
		char* argv[1] = { namestr };


		glutInit(&argc, argv);

		glutInitWindowSize(400, 400);
		glutInitWindowPosition(100, 100);

		glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
		//glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);

		int mainHandle = glutCreateWindow(name);
		glutSetWindow(mainHandle);

		glutReshapeFunc(reshapeCallback);

		delete[] namestr;


		/*glutInit(&argc, argv);
		glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
		glutInitWindowPosition(100, 100);
		glutInitWindowSize(400, 400);
		glutCreateWindow("第一个OpenGL程序");*/


		/*glutDisplayFunc(&myDisplay);

		glutMainLoop();*/
	}

	void setupDefaultRenderState()
	{
		// Setup default render states
		glClearColor(0.3f, 0.4f, 0.5f, 1.0);
		glEnable(GL_DEPTH_TEST);
		glEnable(GL_COLOR_MATERIAL);

		// Setup lighting
		/*glEnable(GL_LIGHTING);
		PxReal ambientColor[] = { 0.0f, 0.1f, 0.2f, 0.0f };
		PxReal diffuseColor[] = { 1.0f, 1.0f, 1.0f, 0.0f };
		PxReal specularColor[] = { 0.0f, 0.0f, 0.0f, 0.0f };
		PxReal position[] = { 100.0f, 100.0f, 400.0f, 1.0f };
		glLightfv(GL_LIGHT0, GL_AMBIENT, ambientColor);
		glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuseColor);
		glLightfv(GL_LIGHT0, GL_SPECULAR, specularColor);
		glLightfv(GL_LIGHT0, GL_POSITION, position);
		glEnable(GL_LIGHT0);*/
	}

	void finishRender()
	{
		glutSwapBuffers();
	}


}