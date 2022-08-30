#include<iostream>
using namespace std;
int input(int[], int);
void display(int [], int);
int sum(int [], int);
int main()
{
    int  n;
    cout << "Enter the number of rows/columns of the array: ";  
    cin >> n;
    
    int a[n];
    int size = sizeof(a)/sizeof(a[0]);
    cout << "Enter the elements of the array: "  << endl;

    input (a,size);
    cout << "Displaying  the  matrix: " << endl;
    display(a,size); 
    cout << "The sum of the elements of the array is: " << sum(a,size) << endl;                    
    
  
    return 0;
}
int input(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<"a[" << i << "] = ";
        cin >> a[i];
    }
    return a[size];
}

void display(int arr[], int size)
{
    cout<<"[";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "]";
    cout << endl;
}

int sum(int arr[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

