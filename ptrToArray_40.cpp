// Array of Pointers
#include <iostream>
int input(int, int (*)[10]);
void display(int, int (*)[10]);
using namespace std;
int main()
{

    int m, a[10];
    cout << "Enter the size of the array" << endl;
    cin >> m;
    cout << "Enter array elements: " << endl;
    input(m, &a);
    cout << "The elements in the 1D Array are:";
    display(m, &a);
    return 0;
}
int input(int size, int (*ptr)[10])
{

    for (int i = 0; i < size; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> (*ptr)[i];
    }
    return (*ptr)[size];
}
void display(int size, int (*ptr)[10])
{
    cout << "The elements in the 1D Array are:";
    for (int i = 0; i < size; i++)
    {
        cout << (*ptr)[i] << " ";
    }
}