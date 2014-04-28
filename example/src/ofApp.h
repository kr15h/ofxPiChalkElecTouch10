/*
 Krisjanis Rijnieks 2014 (http://rijnieks.lv)
 
 This application demonstrates the ofxPiChalkElecTouch10 addon functionality. What it basically does is react to mousePressed, mouseReleased and mouseDragged events that actualy should be received as touch events as the Chalk Electronics thing is a touchscreen actually.
 
 I made this quick modification of the ofAppEGLWindow class just for detecting the mousePressed events. Feel free to improve on this as it is actually possible to use this screen as a multi-touch device.
*/
#ifndef H_OF_APP
#define H_OF_APP

#include "ofMain.h"
#include "ofxPiChalkElecTouch10.h"

class ofApp : public ofBaseApp
{
public:
	void setup();
	void update();
	void draw();

	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void mouseDragged(int x, int y, int button);
	
	ofPoint pos;
	float radius;
	ofColor color;
};

#endif
