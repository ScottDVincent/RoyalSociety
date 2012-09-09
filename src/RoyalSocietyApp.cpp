/** 
* @RoyalSocietyApp.cpp
* A simple app to display a cat picture using cinder
* 
* @author Adam Brush
* @date 2012-09-09
* 
* @note This file is (c) 2012. It is licensed under the
* CC BY 3.0 licenses (http://creativecommons.org/licenses/by/3.0/),
* which means you are free to use, share, and remix it as long as you
* give attribution. Commercial uses are allowed.
*/

#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class RoyalSocietyApp : public AppBasic {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
};

void RoyalSocietyApp::setup()
{
}

void RoyalSocietyApp::mouseDown( MouseEvent event )
{
}

void RoyalSocietyApp::update()
{
}

void RoyalSocietyApp::draw()
{
	// clear out the window with black
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP_BASIC( RoyalSocietyApp, RendererGl )
