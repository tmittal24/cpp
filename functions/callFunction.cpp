#include <stdio.h>
#include <iostream>
using namespace std;

//function delcaration  
int add(int a, int b);

int main()
{
    cout << "Hello World!";
    int a = 10;
    int b = 20;
    int c = 0 ;
    //passing arguments - argument is the value/variable/reference being passed in
    c = add(a, b);
    cout << "Sum is: " << c << endl;
    return 0;
}

//Here a1 and b1 are the parameters - parameter is the receiving variable used w/in the function/block
int add(int a1, int b1)
{
    return a1 + b1;
}

// Path: abc.cpp    Output: Hello World!