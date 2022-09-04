#include <iostream>
int input(int[], int);
void display(int[], int);
void enterAnElementFromFirstIndex(int[], int, int);
using namespace std;
int main()
{
    int m, n;
    cout << "Enter the size of the  array: ";
    cin >> m;
    int a[m];
    int size = sizeof(a) / sizeof(a[0]);
    cout << "Enter the elements of  Matrix: " << endl;
    input(a, size);
    cout << "Displaying the  Matrix: " << endl;
    display(a, size);
    enterAnElementFromFirstIndex(a, size, n);

    return 0;
}
int input(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    cout << endl;
    return a[size];
}
void display(int a[], int size)
{
    cout << "[";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << "]";
    cout << endl;
}
void enterAnElementFromFirstIndex(int array[], int size, int n)
{
Label:
    cout << "1. Insert an element in first index in the array"
         << "\n"
         << "2.Exit" << endl;
    cin >> n;
    switch (n)
    {
    case 1:
        int pos, value;
        cout << "Enter the value of the element: ";
        cin >> value;
        size = size + 1;
        for (int i = size - 1; i > 0; i--)
        {
            array[i] = array[i - 1];
        }
        array[0] = value;
        cout << "Array after inserting the element: " << endl;
        display(array, size);       
        goto Label;
        break;
    case 2:
        exit(0);
        break;
    default:
        cout << "Invalid choice" << endl;
    }
}