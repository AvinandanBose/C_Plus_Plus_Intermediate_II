#include <iostream>
int input(int[], int);
void display(int[], int);
int arrangement(int , int [], int );
void deleteAnElementFromLastIndex(int[], int, int);
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
    deleteAnElementFromLastIndex(a, size, n);

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

int arrangement(int i, int arr[], int size)
{
    if (size == 0)
    {
        return 0;
    }

    else
    {
        arr[size] = arr[i];

        arrangement(i + 1, arr, size - 1);
    }
    return arr[i];
}
void deleteAnElementFromLastIndex(int array[], int size, int n)
{

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
        arrangement(0, array, size - 1);
        size = size - 1;
        goto Label;
        break;
    case 2:
        cout << "Displaying Array after deletion of last index" << endl;
        display(array, size);
        exit(0);
        break;
    case 3:
        exit(0);
        break;
    default:
        cout << "Invalid choice" << endl;
        goto Label;
        break;
    }
}