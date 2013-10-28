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

	//initialize modelview matrix
	glMatrixMode( GL_MODELVIEW );
	glLoadIdentity();

	//initialize clear color
	glClearColor( 0.f, 0.f, 0.f, 1.f );

	//check for error
	GLenum error = glGetError();
	if ( error != GL_NO_ERROR )
	{
		printf( "Error initializing OpenGL! %s\n", gluErrorString( error ) );
		return false;
	}

	return true;
}
// end initGL()

void update()
{

}
//end update()
