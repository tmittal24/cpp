#include "Rectangle.cpp"
#include <iostream>
using namespace std;
int main()
{
    Rectangle rectangleObj1;
    rectangleObj1.height = 10;
    rectangleObj1.width = 30;
    rectangleObj1.draw();
    cout << rectangleObj1.getArea() << endl;

    return 0;
}