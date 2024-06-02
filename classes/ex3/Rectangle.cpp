#include <iostream>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle()
{
    // initialize the width and height
    cout << "Rectangle constructor called.......... \n"
         << endl;
    width = 0;
    height = 0;
}

Rectangle::Rectangle(int x, int y)
{
    width = x;
    height = y;
}

int Rectangle::getArea()
{
    int result = width * height;
    return result;
}

void Rectangle::draw()
{
    cout << "Drawing a rectangle" << endl;
}

void Rectangle::setWidth(int w)
{
    width = w;
}

void Rectangle::setHeight(int h)
{
    height = h;
}

int Rectangle::getWidth()
{
    return width;
}

int Rectangle::getHeight()
{
    return height;
}
