#include "MyClassTemplate.h"
#include <iostream>
using namespace std;

// class Student;

void printDetails(Student myObj);
int main()
{
  {
    Student myObj1; // Create an object of MyClass

    // Access attributes and set values
    myObj1.age = 18;
    myObj1.name = "Trijal";
    myObj1.myMethod();
    printDetails(myObj1);
  }

  {
    Student myObj2("Ritu", 4); // Create an object of MyClass


    // Print attribute values
    printDetails(myObj2);
  }

  return 0;
}

void printDetails(Student myObj)
{
  // Print attribute values
  cout << "--------------------------------" << "\n";
  cout << myObj.age << "\n";
  cout << myObj.name << "\n";
}
