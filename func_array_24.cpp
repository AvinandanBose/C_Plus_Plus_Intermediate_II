#include<iostream>
int input(int[], int);
void display(int[], int);
void deleteAnElementFromLastIndex(int[], int, int);
using namespace std;
int main(){
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
void deleteAnElementFromLastIndex(int array[], int size, int n)
{
Label:
    cout << "1. Delete an element from last index in the array"
         << "\n"
         << "2.Exit" << endl;
    cin >> n;
    switch (n)
    {
    case 1:
        size = size - 1;
        cout << "Array after deleting the element: " << endl;
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