#include "cinder/app/AppBasic.h"
#include "cinder/Color.h"
#include "cinder/gl/gl.h"
#include "cinder/Vector.h"
#include "cinder/app/MouseEvent.h"
#include "cinder/Rand.h"
#include "gl.h"

class EclipseCinderTemplate : public ci::app::AppBasic {
public:
	void setup();
	void prepareSettings( ci::app::AppBasic::Settings *settings );
	void mouseDown( ci::app::MouseEvent event );
	void update();
	void draw();
};

void EclipseCinderTemplate::prepareSettings( ci::app::AppBasic::Settings *settings )
{
	settings->setWindowSize( 800, 600 );
}

void EclipseCinderTemplate::setup()
{
	std::cout << "Setting application path: " << getAppPath() << std::endl;
	chdir( getAppPath().c_str( ) );

	//[[NSApplication sharedApplication] activateIgnoringOtherApps:YES]
}

void EclipseCinderTemplate::mouseDown( ci::app::MouseEvent event )
{
}

void EclipseCinderTemplate::update()
{
}

void EclipseCinderTemplate::draw()
{
	// clear out the window with black
	ci::Color aColor = ci::Color( 0, 0, 0 );
	aColor.r = fabs( cosf(getElapsedFrames() * 0.008) );
	aColor.g = fabs( sinf(getElapsedFrames() * 0.01) );
	aColor.b = (float) getMousePos().x / getWindowWidth();

	ci::gl::clear( aColor );

	ci::gl::color( ci::Color(aColor * 0.5) );
	ci::gl::drawLine( ci::Vec2f(getMousePos()), ci::Vec2f( getWindowCenter() ) );
}

CINDER_APP_BASIC( EclipseCinderTemplate, ci::app::RendererGl )
