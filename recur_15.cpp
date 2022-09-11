#include <iostream>
int input(int[], int);
void display(int[], int);
int largestelem(int[], int);
int largecalc(int , int [], int , int ) ;
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
    cout << "Largest element in the Array is:" << endl;
    cout << largestelem(a, size);

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
int largecalc(int i, int arr[],int large, int size)
{
    if (i == size)
    {
        return large;
    }
    if (arr[i] > large)
    {
        large = arr[i];
    }
    largecalc(i + 1, arr, large, size);
}
int largestelem(int arr[], int size)
{
    int largest = arr[0];
    
    return largecalc(0, arr, largest, size-1);
}