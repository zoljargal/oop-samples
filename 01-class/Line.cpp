//
// Created by zoloo on 10/28/16.
//

#include "Line.h"
#include <math.h>

float Line::getX1() {
    return x1;
}

void Line::setX1(float _x1) {
    x1 = _x1;
}

float Line::getX2(){
    return x2;
}

void Line::setX2(float _x2) {
    Line::x2 = _x2;
}

float Line::getY1() {
    return y1;
}

void Line::setY1(float _y1) {
    Line::y1 = _y1;
}

float Line::getY2() {
    return y2;
}

void Line::setY2(float _y2) {
    Line::y2 = _y2;
}


float Line::calculateLength() {
    float l=pow(x2-x1, 2)+pow(y2-y1, 2);
    return pow(l, 0.5);
}

bool Line::isLine() {
    float l = calculateLength();
    if(l>0)
        return true;
    return false;
}
