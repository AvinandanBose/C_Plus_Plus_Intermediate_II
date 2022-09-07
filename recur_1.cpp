#include<iostream>
int input(int[], int);
void display(int[], int);
int sum(int [], int );
using namespace std;
int main()
{
    int m;
    cout<<"Enter the size of the array: ";
    cin>>m;
    int arr[m];
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<"Enter the elements of the array: " << endl;
    input(arr, size);
    cout<<"Displaying the array: "<< endl;
    display(arr, size);
    cout << "The sum of the elements of the array is: " << sum(arr, size) << endl;

    return 0;
}
int input(int array[], int size){
    for(int i=0; i<size; i++){
        cin>>array[i];
    }
    return array[size];
}
void display(int arr[], int size){
    cout << "[";
    for (int i = 0; i < size; i++)
    {
        cout << "a[" << i << "] = ";
        cout << arr[i] << " ";
    }
    cout << "]";
    cout << endl;
}
int sum(int arr[], int size){
    if(size == 0){
        return 0;
    }
        
    else{
        return arr[size-1] + sum(arr, size-1);
    }
        
}