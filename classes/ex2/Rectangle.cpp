#include <iostream>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle()
{
    cout << "Rectangle constructor called.......... \n" << endl;
    width = 0;
    height = 0;
}

int Rectangle::getArea()
{
    return width * height;
}

void Rectangle::draw()
{
    cout << "Drawing a rectangle" << endl;
}
