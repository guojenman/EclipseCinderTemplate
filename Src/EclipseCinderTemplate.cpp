#include "cinder/app/AppBasic.h"
#include "cinder/Color.h"
#include "cinder/gl/gl.h"
#include "cinder/Vector.h"
#include "cinder/app/MouseEvent.h"
#include "cinder/Rand.h"
#include "gl.h"

class EclipseCinderTemplate : public ci::app::AppBasic {
public:
	void prepareSettings( ci::app::AppBasic::Settings *settings );
	void setup();
	void update();
	void draw();
};

void EclipseCinderTemplate::prepareSettings( ci::app::AppBasic::Settings *settings )
{
	settings->setWindowSize( 800, 600 );
}

void EclipseCinderTemplate::setup()
{

}


void EclipseCinderTemplate::update()
{

}

void EclipseCinderTemplate::draw()
{

}

CINDER_APP_BASIC( EclipseCinderTemplate, ci::app::RendererGl )
