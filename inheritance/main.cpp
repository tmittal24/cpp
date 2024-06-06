#include <iostream>
#include "TextBox.cpp"
using namespace std;

int main()
{
    //  Widget widget;
    Widget widget("Widget initialized with value");
    TextBox textBox("TextBox initialized with value");
    textBox.setValue("Hello, World!");
    cout << textBox.getValue() << endl;
    textBox.enable();
    cout << "Is enabled: " << textBox.isEnabled() << endl;

    return 0;
}
