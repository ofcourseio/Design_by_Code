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
    ofBackground(ofColor::yellow);

    // 1.
    float spacing = 20.0;
    ofSetColor(150, 0, 200);

    for(float x = 0; x < ofGetWidth(); x += spacing){
        float y = ofGetHeight() * 0.5;
        float width = 10;
        float height = 10;
        ofRect(x, y, width, height);
    }
    
//    // 2.
//    float spacing = 20.0;
//    ofSetColor(150, 0, 200);
//
//    for(float x = 0; x < ofGetWidth(); x += spacing){
//        for(float y = 0; y < ofGetHeight(); y += spacing){
//            float width = 10;
//            float height = 10;
//            ofRect(x, y, width, height);
//        }
//    }

//    // 3.
//    float spacingX = ofMap(mouseX, 0, ofGetWidth(), 1.0, 40.0);
//    float spacingY = ofMap(mouseY, 0, ofGetHeight(), 1.0, 40.0);
//    ofSetColor(150, 0, 200);
//    
//    for(float x = 0; x < ofGetWidth(); x += spacingX){
//        for(float y = 0; y < ofGetHeight(); y += spacingY){
//            float width = 10;
//            float height = 10;
//            ofRect(x, y, width, height);
//        }
//    }
    
//    // 4.
//    float spacingX = ofMap(mouseX, 0, ofGetWidth(), 10.0, 40.0);
//    float spacingY = ofMap(mouseY, 0, ofGetHeight(), 10.0, 40.0);
//    
//    for(float x = 0; x < ofGetWidth(); x += spacingX){
//        for(float y = 0; y < ofGetHeight(); y += spacingY){
//            float width = 10;
//            float height = 10;
//            ofColor myColor = ofColor(ofMap(x, 0, ofGetWidth(), 0, 255),
//                                      0,
//                                      ofMap(y, 0, ofGetHeight(), 0, 255));
//            ofSetColor(myColor);
//            ofRect(x, y, width, height);
//        }
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
