#include <iostream>
int input(int[], int);
void display(int[], int);
int smallestelem(int[], int);
int smallcalc(int, int[], int, int);
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
    cout << "Smallest element in the Array is:" << endl;
    cout << smallestelem(a, size);

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
int smallcalc(int i, int arr[], int small, int size)
{
    if (i == size)
    {
        return small;
    }
    if (arr[i] < small)
    {
        small = arr[i];
    }
    smallcalc(i + 1, arr, small, size);
}
int smallestelem(int arr[], int size)
{
    int smallest = arr[0];

    return smallcalc(0, arr, smallest, size - 1);
}