/*-------------------------------------------------------------
 [ofCourse][Spring 2015] Design by Code
 Gabriel Gianordoli
 gianordoli.com
 @gianordoli
 
 This example is borrowing some code from
 examples/graphics/blendingExample
 -------------------------------------------------------------*/

#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    showImage3 = false;
    
    myImage1.loadImage("ny.jpg");
    myImage1.resize(myImage1.width * 0.5, myImage1.height  * 0.5);

    myImage2.loadImage("tumblr_myvf4g460A1srprpho1_1280.jpg");
    myImage3.loadImage("cliff-briggie-transient-art-02.jpg");
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(255);
    ofDisableAlphaBlending();   // Otherwise this image will blend with the background
    myImage1.draw((ofGetWidth() - myImage1.width)*0.5, 0);
    
    ofEnableBlendMode(blendMode);
//    ofSetColor(255, 0, 0);
    myImage2.draw(0, -100, myImage2.width * 1.7, myImage2.height * 1.7);

    if(showImage3){
        myImage3.draw(0, 0, myImage3.width * 1.2, myImage3.height * 1.2);
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

    switch (key) {
        case 32:
            showImage3 = (showImage3) ? (false) : (true);
            
        case 49:
            blendMode = OF_BLENDMODE_ALPHA;
            break;
        case 50:
            blendMode = OF_BLENDMODE_ADD;
            break;
        case 51:
            blendMode = OF_BLENDMODE_MULTIPLY;
            break;
        case 52:
            blendMode = OF_BLENDMODE_SUBTRACT;
            break;
        case 53:
            blendMode = OF_BLENDMODE_SCREEN;
            break;
        default:
            break;
    }
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
