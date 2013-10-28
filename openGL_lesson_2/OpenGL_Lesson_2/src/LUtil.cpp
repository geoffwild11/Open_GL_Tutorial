#include "LUtil.h"

// The current color rendering mode
int gColormode = COLOR_CYAN;

// Projection scale
GLfloat gProjectionScale = 1.f;

bool initGL()
{
	//initialize project matrix
	glMatrixMode( GL_PROJECTION );
}
