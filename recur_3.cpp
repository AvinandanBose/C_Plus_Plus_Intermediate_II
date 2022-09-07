#include <iostream>
int input(int[], int);
void display(int[], int);
int fact(int);
using namespace std;
int main()
{
    int m;
    cout << "Enter the size of the array: ";
    cin >> m;
    int arr[m];
   
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Enter the elements of the array: " << endl;
    
    
    input(arr, size);
    cout << "Displaying the array: " << endl;
    display(arr, size);

    cout << "The factorial of the elements of the array is: " << endl;
    for (int i = 0; i < size; i++)
    {
        int n = arr[i];
        arr[i] = fact(n);
    }
    display(arr, size);
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
int fact(int n){
    if(n == 0){
        return 1;
    }
    else{
        return n * fact(n-1);
    }                                   
}