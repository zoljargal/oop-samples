//
// Created by zoloo on 10/28/16.
//

#ifndef OOP_SAMPLES_LINE_H
#define OOP_SAMPLES_LINE_H


class Line {
private:
    float x1, x2;
    float y1, y2;

public:
    void setX1(float);
    float getX1();
    void setX2(float);
    float getX2();
    void setY1(float);
    float getY1();
    void setY2(float);
    float getY2();

    bool isLine();
    float calculateLength();

};


#endif //OOP_SAMPLES_LINE_H
