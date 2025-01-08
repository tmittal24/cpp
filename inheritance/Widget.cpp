#include "Widget.h"
#include <iostream>
using namespace std;

Widget::Widget()
{
    cout << "called Widget  default constructor -> " << endl;
}

Widget::Widget(string value)
{
    cout << "called Widget single parameter constructor -> " + value << endl;
}

void Widget::enable()
{
    enabled = true;
}

void Widget::disable()
{
     enabled = false;
}

bool Widget::isEnabled()
{
    return enabled;
}
