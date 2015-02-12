/*-------------------------------------------------------------
 [ofCourse][Spring 2015] Design by Code
 Gabriel Gianordoli
 gianordoli.com
 @gianordoli
 -------------------------------------------------------------*/

#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    scaleX = 1;
    scaleY = 1;
    
    mySvg1.load("ashley_bedore_chair.svg");
    mySvg2.load("joris_hoogendoorn_chair.svg");

    titlingBold.loadFont("TitliGotFBComBol", 30);
    titlingLight.loadFont("TitliGotFBConLig", 180);
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0, 220, 120);
    
    ofSetColor(ofColor::tomato);
    ofCircle(ofGetWidth()*0.5, ofGetHeight()*0.5, mouseX);
    
    string text = "CHAIR";

    ofSetColor(255);
    
    ofPushMatrix();
        ofTranslate(ofGetWidth()*0.33, ofGetHeight()*0.5);
            ofRectangle bounds = titlingBold.getStringBoundingBox(text, 0, 0);
            titlingBold.drawString(text, -bounds.width * 0.5, 200);
            ofScale(scaleX, scaleX);
                ofTranslate(- mySvg1.getWidth() * 0.5, - mySvg1.getHeight() * 0.5);
                    mySvg1.draw();
    ofPopMatrix();
    
    ofPushMatrix();
        ofTranslate(ofGetWidth()*0.66, ofGetHeight()*0.5);
            bounds = titlingLight.getStringBoundingBox(text, 0, 0);
            titlingLight.drawString(text, -bounds.width * 0.5, 0);
            ofScale(scaleY, scaleY);
                ofTranslate(- mySvg2.getWidth() * 0.5, - mySvg2.getHeight() * 0.5);
                    mySvg2.draw();
    ofPopMatrix();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    scaleX = ofMap(x, 0, ofGetWidth(), 1, 10);
    scaleY = ofMap(y, 0, ofGetHeight(), 1, 10);
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
