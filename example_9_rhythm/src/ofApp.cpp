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
//    cout << ofGetFrameNum() << endl;
//    cout << ofGetElapsedTimef() << endl;
    
    ofBackground(0, 255, 220);
    
    // 1.
    ofSetColor(ofColor::salmon);
    float radius = ofGetFrameNum();
    ofCircle(ofGetWidth()*0.5, ofGetHeight()*0.5, radius);

//    // 2.
//    ofSetColor(ofColor::salmon);
//    int spacing = 60;
//    for(int x = 0; x < ofGetWidth(); x += spacing){
//        for(int y = 0; y < ofGetWidth(); y += spacing){
//            float radius = 10.0;
//            if((x + y) % 360 == 0){
//                radius = ofGetFrameNum()/10.0;
//            }
//            ofCircle(x, y, radius);
//        }
//    }
    
//    // 3.
//    int spacing = 60;
//    for(int x = 0; x < ofGetWidth(); x += spacing){
//        for(int y = 0; y < ofGetWidth(); y += spacing){
//            float radius = 10.0;
//            ofColor myColor = ofColor::salmon;
//            if((x + y) % 240 == 0){
////                radius = ofGetFrameNum() % 60;
//                radius = (ofGetFrameNum() % 360)/2;
//                myColor = ofColor::yellow;
//            }
//            ofSetColor(myColor);
//            ofCircle(x, y, radius);
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
