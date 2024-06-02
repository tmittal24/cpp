// #ifndef RECTANGLE_H
// #define RECTANGLE_H

#include <iostream>
using namespace std;

class Rectangle
{
private:
    int width;
    int height;

public:

    // Constructor
    Rectangle();
    Rectangle(int x, int y);

// Member Functions
    int getArea();
    void draw();

// Setters and Getters
    void setWidth(int w);
    void setHeight(int h);

    int getWidth();
    int getHeight();
};

// #endif