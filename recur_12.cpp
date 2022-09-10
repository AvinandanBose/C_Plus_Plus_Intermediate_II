// delete an element from any position in the array
#include <iostream>
int input(int[], int);
void display(int[], int);
void deleteAnElementFromAnyPos(int[], int, int);
int arrangement(int, int[], int, int);
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
    deleteAnElementFromAnyPos(a, size, n);

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
int arrangement(int i, int arr[], int temp, int size)
{
    if (i == temp)
    {
        return 0;
    }
    
    if (size == 0)
    {
        return 0;
    }

    else
    {
        arr[i] = arr[i + 1];

        arrangement(i + 1, arr, temp, size - 1);
    }
    return arr[i];
}
void deleteAnElementFromAnyPos(int array[], int size, int n)
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
        int pos;
        cout << "Enter the position of the element: ";
        cin >> pos;
        arrangement(pos, array, size-1, size);
        size = size - 1;
        goto Label;
        break;
    case 2:
        cout<<"Displaying the matrix after deletion:"<< endl;
        display(array, size);
        exit(0);
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