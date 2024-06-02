// #ifndef RECTANGLE_H
// #define RECTANGLE_H

#include <iostream>
using namespace std;

class Rectangle
{
public:
    // private:
    int width;
    int height;

    Rectangle();
    int getArea();
    void draw();
};

// #endif