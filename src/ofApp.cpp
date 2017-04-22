#include "ofApp.h"

string info;
//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255,255,255);
    ofSetCircleResolution(50);
    

}

//--------------------------------------------------------------
void ofApp::update(){
    r = 0 + 255 * cos(ofMap(mouseX, 0, 1021, -1, 1));
    g = 128 -128 * cos(ofMap(mouseX, 0, 1021, -1, 1));
    b = 110 + 255 * sin(ofMap(mouseY, 0, 1021, -1, 1));
    info =  ofToString( sin(ofMap(mouseX, 0, 1021, -1, 1)) );

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //下地の線
    for(int i = 0; i < w; i = i + w/30){
        ofSetColor(0,0,0);
        ofDrawLine(i, 0, i, h);
    }
    
    for(int i = 0; i < h; i = i + h/20){
        ofDrawLine(0, i, w, i);
    }

    
    //マウスのライン
    ofSetColor(0,0,0);
    ofDrawLine(mouseX, 0, mouseX, h);
    ofDrawLine(0, mouseY, w, mouseY);
    
    //マウスのにむかって中心からでる線
    ofSetColor(r,g,b);
    ofDrawLine(w/2, h/2, mouseX, mouseY);
    
    //中心の円
    ofFill();
    ofDrawCircle(w/2, h/2, (mouseX/10-mouseY/10) + (ofGetFrameNum()*10)%120 - 30);
    
    //もう一個
    ofNoFill();
    ofDrawCircle(w/2, h/2, (mouseX/10-mouseY/10)+130 + (ofGetFrameNum()*10)%120 );
    
    
    //確認用
    ofDrawBitmapString(info, 30, 30);
   
    

   
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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
