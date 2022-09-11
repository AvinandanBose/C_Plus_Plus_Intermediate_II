#include <iostream>
int input(int[], int);
void display(int[], int);
int secondLargest(int[], int);
int arrangement(int , int , int , int [], int ); 
using namespace std;
int main()
{
    int m;
    cout << "Enter the size of the 1st array: ";
    cin >> m;
    int a[m];
    int size = sizeof(a) / sizeof(a[0]);
    cout << "Enter the elements of 1st  Matrix: " << endl;
    input(a, size);
    cout << "Displaying the  Matrix: " << endl;
    display(a, size);
    int secondlargeNum = secondLargest(a, size);
    cout << "The second largest number in the array is: " << secondlargeNum << endl;
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
int arrangement(int i, int first, int second, int arr[], int size)
{
    if (i == size)
    {
        return second;
    }
    if (arr[i] > first)
    {
        second = first;
        first = arr[i];
    }
    else if (arr[i] > second && arr[i] < first && arr[i] != first)
    {
        second = arr[i];
    }
    arrangement(i + 1, first, second, arr, size);
}

int secondLargest(int arr[], int size)
{
    int i, first, second;
    if (arr[0] > arr[1])
    {
        first = arr[0];
        second = arr[1];
    }
    else
    {
        first = arr[1];
        second = arr[0];
    }
    return arrangement(2, first, second, arr, size - 1);
}
