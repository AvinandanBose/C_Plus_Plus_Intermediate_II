#include <iostream>
int input(int[], int);
void display(int[], int);
int lastelemen(int[], int);
using namespace std;
int main()
{
    int m;
    cout << "Enter the size of the array: ";
    cin >> m;
    int a[m];
    int size = sizeof(a) / sizeof(a[0]);
    cout << "Enter the elements of   Matrix: " << endl;
    input(a, size);
    cout << "Displaying the  Matrix: " << endl;
    display(a, size);
    int lastelement = lastelemen(a, size);
    cout << "The last element in the array is: " << lastelement << endl;
    
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
int lastelemen(int a[], int size)
{
    int last = 0;
    for (int i = 0; i < size; i++)
    {
        if (i==size-1)
        {
            last = a[i];
        }
        
       
    }
    return last;
}