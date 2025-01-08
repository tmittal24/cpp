#include <iostream>
using namespace std;

class Student // The class
{
public:           // Access specifier
  int age;        // Attribute (int variable)
  string name;    // Attribute (string variable)
  string message; // Attribute (string variable)

  // static variable - public access
  static string group;

  // inline constructor declaration
  Student()
  {
    cout << "1) Hello World! from inline default constructor ! \n";
  }

  // external constructor declaration (with arguments)
  Student(string name, int age);

  // Constructor definition outside the class
  Student(string name, int age, string message)
  {
    this->name = name;
    this->age = age;
    this->message = message;
    cout << "Hello World! from external constructor.... \n";
  }

  // external method
  void myMethod();
};

// static variable - definition
string Student::group = "";

// Constructor definition outside the class
Student::Student(string a_name, int a_age)
{
  name = a_name;
  age = a_age;
  cout << "Hello World! from external constructor.... \n";
}

// Method/function defined outside the class
void Student::myMethod()
{
  cout << "Hello World! from external myMethod.... \n";
}
