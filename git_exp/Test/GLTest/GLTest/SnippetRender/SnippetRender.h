#pragma once
#define GLUT_DISABLE_ATEXIT_HACK 
#include <gl\glut.h>
#include <PxPhysicsAPI.h>

#pragma warning(disable : 4996)


namespace Snippets
{
	void setupDefaultWindow(const char* name);

	void setupDefaultRenderState();


	void finishRender();
}
