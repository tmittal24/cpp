#include <iostream>
using namespace std;

int main()
{
    int array1[] = {12, 45, 23, 51, 19, 8};

    int size = sizeof(array1)/sizeof(int);
    cout << size << endl;

    for (int i = 0; i <= (size - 1); i++)
    {
        for (int j = i + 1; j <= size; j++)
        {
            if (array1[j] < array1[i])
            {
                int a = array1[i];
                array1[i] = array1[j];
                array1[j] = a;
            }
        }
    }

    for (int i = 0; i < sizeof(array1)/sizeof(int); i++)
    {
        cout << array1[i] << endl;
    }
    cout << "exiting.................." << endl;
    return 0;
}