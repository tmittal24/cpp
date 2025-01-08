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

    // Access static variable
    Student::group = "A";
  }

  {
    Student myObj2("Ritu", 4); // Create an object of MyClass

    Student myObj3("Ritu", 4, "ritu is great"); // Create an object of MyClass
    // Access static variable
    Student::group = "B";

    // Print attribute values
    printDetails(myObj2);
  }

  {
    // Create an object of MyClass using new keyword
    Student *myObj4 = new Student();
    Student *myObj5 = new Student("shammi", 5);

    // Access static variable
    Student::group = "C";

    // Print attribute values
    printDetails(*myObj5);

    cout << "--------------------------------" << "\n";
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
