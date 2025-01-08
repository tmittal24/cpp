#include "TextBox.h"

TextBox::TextBox()
{
    cout << "called default TextBox constructor -> " << endl;
}

TextBox::TextBox(const string &value)
{
    cout << "called single parameter TextBox constructor -> " + value << endl;
}

string TextBox::getValue()
{
    return value;
}

string TextBox::setValue(string value1)
{
    return value = value1;
}