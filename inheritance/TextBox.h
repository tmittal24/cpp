#include <iostream>
#include "Widget.cpp"
using namespace std;

class TextBox : public Widget
{
public:
    TextBox();
    explicit TextBox(const string &value);

    string getValue();
    string setValue(string value);

private:
    string value;
};