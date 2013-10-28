#include "LUtil.h"

// The current color rendering mode
int gColorMode = COLOR_CYAN;

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

void render()
{
	//clear color buffer
	glClear( GL_COLOR_BUFFER_BIT );

	//reset modelview matrix
	glMatrixMode( GL_MODELVIEW );
	glLoadIdentity();

	//move to center of screen
	glTranslatef( SCREEN_WIDTH / 2.f, SCREEN_HEIGHT / 2.f, 0.f);

	if (gColorMode == COLOR_CYAN)
	{
		//Solid Cyan
		glBegin( GL_QUADS );
			glColor3f( 0.f, 1.f, 1.f);
			glVertex2f( -50.f, -50.f );
			glVertex2f(  50.f, -50.f );
			glVertex2f(  50.f,  50.f );
			glVertex2f( -50.f,  50.f );
		glEnd();
	}

	else
	{
		//RYGB Mix
		glBegin( GL_QUADS );
			glColor3f( 1.f, 0.f, 0.f ); glVertex2f( -50.f, -50.f );
			glColor3f( 1.f, 1.f, 0.f ); glVertex2f(  50.f, -50.f );
			glColor3f( 0.f, 1.f, 0.f ); glVertex2f(  50.f,  50.f );
			glColor3f( 0.f, 0.f, 1.f ); glVertex2f( -50.f,  50.f );
		glEnd();
	}

	//Update screen
	glutSwapBuffers();
}
//end render()

void handleKeys()
{

}
//end handleKeys()
