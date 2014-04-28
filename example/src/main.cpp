#include "ofMain.h"
#include "ofApp.h"
#include "ofxPiChalkElecTouch10.h"

int main()
{
	// The screen size for the Chalk Elec 10 inch is 1280 x 800
	ofPtr<ofAppBaseWindow> window = ofPtr<ofAppBaseWindow>(new ofxAppEGLWindow());
	ofSetupOpenGL(window,1280,700,OF_WINDOW);
	ofRunApp(new ofApp());
}
