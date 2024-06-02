#include "Rectangle.cpp"
#include <iostream>
using namespace std;

int main()
{
    Rectangle rectangleObj1(10, 30);
    // rectangleObj1.setHeight(10);
    // rectangleObj1.setWidth(30);
    rectangleObj1.draw();
    cout << rectangleObj1.getArea() << endl;

    cout << rectangleObj1.getHeight() << endl;
    cout << rectangleObj1.getWidth() << endl;


    Rectangle rectangleObj2(10, 20);
    // rectangleObj1.setHeight(10);
    // rectangleObj1.setWidth(30);
    rectangleObj2.draw();
    cout << rectangleObj2.getArea() << endl;

    cout << rectangleObj2.getHeight() << endl;
    cout << rectangleObj2.getWidth() << endl;
    


    return 0;
}