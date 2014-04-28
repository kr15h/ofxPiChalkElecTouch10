#include "ofApp.h"

void ofApp::setup()
{
	printf("Hello Touch!\n");
	pos.x = 50;
	pos.y = 50;
	radius = 10;
	color = ofColor(0,255,255);
	ofHideCursor();
}

void ofApp::update(){}

void ofApp::draw()
{
	ofBackground(0);
	ofSetColor(color);
	ofCircle(pos,radius);
}

void ofApp::mousePressed(int x, int y, int button)
{
	pos.x = x;
	pos.y = y;
	radius = 50;
	cout << "mousePressed " << "x: " << x << ", y: " << y << ", button: " << button <<  endl;
}

void ofApp::mouseReleased(int x, int y, int button)
{
	radius = 10;
	cout << "mouseReleased " << "x: " << x << ", y: " << y << ", button: " << button <<  endl;
}

void ofApp::mouseDragged(int x, int y, int button)
{
	pos.x = x;
	pos.y = y;
	cout << "mouseDragged " << "x: " << x << ", y: " << y << ", button: " << button <<  endl;
}
