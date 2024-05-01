#include <iostream>
using namespace std;
 
// function declaration
int max(int num1, int num2);
 
int main () {
   // local variable declaration:
   int a = 100;
   int b = 200;
   int ret1;
 
   // calling a function to get max value.
   ret1 = max(a, b);
   cout << "Max value is : " << ret1 << endl;
 
   return 0;
}
 
// function returning the max between two numbers
int max(int num1, int num2) {
   // local variable declaration
   int result;
   num1 = 150;
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   return result; 
}