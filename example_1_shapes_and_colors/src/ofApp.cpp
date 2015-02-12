/*-------------------------------------------------------------
 [ofCourse][Spring 2015] Design by Code
 Gabriel Gianordoli
 gianordoli.com
 @gianordoli
 -------------------------------------------------------------*/

#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetCircleResolution(50);
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    // Solid color in RGB
    ofBackground(0, 120, 80);
    
    //     Solid color in Hexadecimal
    //    ofBackgroundHex(0x00ff00);
    
    // CIRCLE
    // Setting a preset color
    ofFill();
    ofSetColor(ofColor::salmon);
    ofCircle(400, 400, 200);
    
    // Setting an RGBA color
    ofSetColor(200, 0, 255, 50);
    ofCircle(200, 200, 100);
    
    // Setting an hexadecimal color
    ofSetHexColor(0xFACADA);
    ofRect(500, 450, 300, 100);
    
    // Drawing a polygon with no fill
    // Setting a grayscale color
    ofSetColor(255, 100);
    ofSetLineWidth(10);
    ofNoFill();
    ofBeginShape();
        ofVertex(500, 300);
        ofVertex(250, 400);
        ofVertex(500, 500);
        ofVertex(250, 600);
        ofVertex(500, 700);
    ofEndShape(true);
    
    // Bezier
    ofBezier(0, 0, ofGetWidth()*0.5, 0, ofGetWidth()*0.5, ofGetHeight(), ofGetWidth(), ofGetHeight());
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}
