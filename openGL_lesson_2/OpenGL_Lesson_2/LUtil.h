/*
 * LUtil.h
 *
 *  Created on: Oct 28, 2013
 *      Author: geoff
 */

#ifndef LUTIL_H_
#define LUTIL_H_

// Screen size for app
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;
const int SCREEN_FPS = 60;

//color modes
const int COLOR_CYAN = 0;
const int COLOR_MULTI = 1;

/************************************************************
 * FUNCTION: initGL()										*
 * PURPOSE: Setup the OpenGL environment					*
 * PRE-CONDITION: A valid OpenGL Context					*
 * POST-CONDITION:											*
 *	1) Initializes matrices and clear color					*
 *	2) Reports to console if there's an OpenGL error		*
 *	3) Returns false if there is an error initializing		*
 * SIDE EFFECTS:											*
 * 	1) Projection matrix set to orthographic matrix			*
 * 	2) Modelview matrix set to identity matrix				*
 * 	3) Matrix mode set to modelview							*
 * 	4) Clear color set to black								*
 ***********************************************************/
bool initGL();

/************************************************************
 * FUNCTION: update()										*
 * PURPOSE: Per frame logic									*
 * PRE-CONDITION: None										*
 * POST-CONDITION: Does Per frame logic						*
 * SIDE EFFECTS: None										*
 ***********************************************************/
void update();




#endif /* LUTIL_H_ */
