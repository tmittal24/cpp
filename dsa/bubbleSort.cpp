#include <iostream>
using namespace std;
int main()
{
    int numbers[] = {4, 3, 7, 5, 8};

    for (int i = 0; i < 5; i++)
    {
        if (numbers[i + 1] < numbers[i])
        {
            int c = numbers[i];
            numbers[i] = numbers[i + 1];
            numbers[i + 1] = c;
        }
        else
        {
        }
    }

    // print
    for (int i = 0; i < 5; i++)
    {
        cout << numbers[i] << endl;
    }
    cout << "hello" << endl;
}