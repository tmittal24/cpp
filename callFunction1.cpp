#include <iostream>
using namespace std;

int add(int a1, int b1);
int main()
{
    printf ("hi Trijal\n");
    cout << "Hello World!";
    int a = 10;
    int b = 20;
    int c  ;
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


