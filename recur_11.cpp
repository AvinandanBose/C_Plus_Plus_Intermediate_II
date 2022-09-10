// delete an element from first index of an array
#include <iostream>
int input(int[], int);
void display(int[], int);
void deleteAnElementFromFirstIndex(int[], int, int);
int arrangement(int,int[], int, int);
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
    deleteAnElementFromFirstIndex(a, size, n);

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
int arrangement(int i, int arr[], int temp,int size){
    if (i == temp){
        return 0;
    }
    if(size == 0){
        return 0;
    }
    
    else{
        
        arr[i] = arr[i+1];
        
        arrangement(i+1, arr,temp, size-1);
    }
    return arr[i];
}
void deleteAnElementFromFirstIndex(int array[], int size, int n)
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
    
        arrangement(0, array,size-1, size);
        size = size - 1;
        goto Label;
        break;
    case 2:
        cout << "Displaying the  Matrix after Insertion: " << endl;
        display(array, size);
        goto Label;
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