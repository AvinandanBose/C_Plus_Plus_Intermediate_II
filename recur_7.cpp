#include <iostream>
int input(int[], int);
void display(int[], int);
void enterAnElementFromLastIndex(int[], int);
int arrangement(int[], int , int , int );
using namespace std;
int main()
{
    int m;
    cout << "Enter the size of the  array: ";
    cin >> m;
    int a[m];
    int size = sizeof(a) / sizeof(a[0]);
    cout << "Enter the elements of  Matrix: " << endl;
    input(a, size);
    cout << "Displaying the  Matrix: " << endl;
    display(a, size);
    enterAnElementFromLastIndex(a, size);

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
int arrangement(int arr[], int val, int temp, int size)
{

    if (size == 0)
    {
        return 0;
    }

    arr[temp - 1] = val;

    arrangement(arr, val, temp, size - 1);

    return arr[size];
}

void enterAnElementFromLastIndex(int array[], int size)
{
    int n;
Label:
    cout << "1. Insert an element from last indext in the array"
         << "\n"
         << "2.Display"
         << "\n"
         << "3.Exit" << endl;
    cin >> n;
    switch (n)
    {
    case 1:
        int value;
        cout << "Enter the value of the element: ";
        cin >> value;
        size = size + 1;
        arrangement(array, value, size, size);
        goto Label;
        break;
    case 2:
        cout << "Array after inserting the element: " << endl;
        display(array, size);
        goto Label;
        break;
    case 3:
        exit(0);
        break;
    default:
        cout << "Invalid input" << endl;
        goto Label;
        break;
    }
}
