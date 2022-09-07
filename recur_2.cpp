#include <iostream>
int input(int[], int);
void display(int[],int);
int fact(int[], int);
using namespace std;
int main()
{
    int m;
    cout << "Enter the size of the array: ";
    cin >> m;
    int arr[m];
    int res[m];
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Enter the elements of the array: " << endl;
    cout << "Note entered Value should be in the order 0,1,2,3,4,5..... " << endl;
    cout <<" That is it depends on the total index i.e. size of the array.  " << endl;
    cout << " Also it depends on the value that the array contains in earlier index." << endl;
    input(arr, size);
    cout << "Displaying the array: " << endl;
    display(arr, size);
    
    cout << "The factorial of the elements of the array is: " << endl;
    for (int i = 0; i < size; i++)
    {
        int n = arr[i];
        res[i] = fact(arr, n-1);
    }
    display(res, size);
    return 0;
}
int input(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> array[i];
    }
    return array[size];
}
void display(int arr[], int size)
{
    cout << "[";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "]";
    cout << endl;
}
int fact(int arr[],int size)
{
    if (size == 0)
    {
        return 1;
    }
    else
    {
        return arr[size] * fact(arr, size - 1);
    }
 
}