#include "LUtil.h"

// The current color rendering mode
int gColormode = COLOR_CYAN;

// Projection scale
GLfloat gProjectionScale = 1.f;

bool initGL()
{
	//initialize projection matrix
	glMatrixMode( GL_PROJECTION );
	glLoadIdentity();
	glOrtho( 0.0, SCREEN_WIDTH, SCREEN_HEIGHT, 0.0, 1.0, -1.0 );

	return true;
}
