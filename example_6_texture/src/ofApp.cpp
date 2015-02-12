/*-------------------------------------------------------------
 [ofCourse][Spring 2015] Design by Code
 Gabriel Gianordoli
 gianordoli.com
 @gianordoli
 -------------------------------------------------------------*/

#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(ofColor::tomato);
    
    // 3
//    ofSeedRandom(20);
    
    // 1.
    for(int i = 0; i < 1000; i++){
        float x = ofRandom(ofGetWidth());
        float y = ofRandom(ofGetHeight());
        ofCircle(x, y, 10);
    }
    
    // 2.
//    for(int i = 0; i < mouseX; i++){
//        float x = ofRandom(ofGetWidth());
//        float y = ofRandom(ofGetHeight());
//        float r = ofMap(mouseY, 0, ofGetHeight(), 2, 100);
//        ofCircle(x, y, r);
//    }
    
    // 3.
//    for(int i = 0; i < mouseX; i++){
//        float x1 = ofRandom(ofGetWidth());
//        float y1 = ofRandom(ofGetHeight());
//        float r = ofMap(mouseY, 0, ofGetHeight(), 2, 100);
//        float x2 = x1 + ofRandom(-r, r);
//        float y2 = y1 + ofRandom(-r, r);
//        ofLine(x1, y1, x2, y2);
//    }
    
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
