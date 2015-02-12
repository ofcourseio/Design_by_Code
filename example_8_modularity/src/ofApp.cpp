/*-------------------------------------------------------------
 [ofCourse][Spring 2015] Design by Code
 Gabriel Gianordoli
 gianordoli.com
 @gianordoli
 -------------------------------------------------------------*/

#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    mySvg1.load("ashley_bedore_chair.svg");
    mySvg2.load("joris_hoogendoorn_chair.svg");
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0, 220, 180);
    
    // 1.
    int spacing = 40;
    ofColor myColor = ofColor(255, 255, 0);
    
    for(int x = 0; x < ofGetWidth(); x += spacing){
        for(int y = 0; y < ofGetHeight(); y += spacing){

            float endAngle = 90;
            if(x % 160 == 0){
                endAngle = 270;
            }
            ofPath myArc;
            myArc.arc(x, y, spacing*0.5, spacing*0.5, 0, endAngle);
            myArc.setColor(myColor);
            myArc.draw();
        }
    }
    

//    // 2.
//    int spacingX = 50;
//    int spacingY = 100;
//    ofSetColor(150, 0, 200);
//    
//    for(int x = 0; x < ofGetWidth(); x += spacingX){
//        for(int y = 0; y < ofGetHeight(); y += spacingY){
//            float width = 10;
//            float height = 10;
//            ofPushMatrix();
//            ofTranslate(x, y);
////            if(x % 200 == 0){
//            if((x + y) % 300 == 0){
//                mySvg2.draw();
//            }else{
//                mySvg1.draw();
//            }
//            ofPopMatrix();
//        }
//    }

//    // 3.
//    int spacingX = 50;
//    int spacingY = 100;
//    ofSetColor(150, 0, 200);
//    ofPushMatrix();
//        ofTranslate(ofGetWidth()*0.5, ofGetHeight()*0.5);
//
//        for(int angle = 0; angle < 360; angle += 10){
//                ofPushMatrix();
//                    ofRotate(angle);
//                    ofTranslate(0, mouseY);
//                        if(angle % 50 == 0){
//                            ofSetColor(ofColor::tomato);
//                            ofCircle(0, 0, mouseX);
//                        }else{
//                            mySvg1.draw();
//                        }
//            
//                ofPopMatrix();
//        }
//    
//    ofPopMatrix();
    
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
