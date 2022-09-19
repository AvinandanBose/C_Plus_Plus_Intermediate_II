//Displaying the 1D matrix in reverse Order
#include <iostream>
int input(int[], int);
void display(int[], int);
int reverseOrder(int [], int [], int , int ) ;
using namespace std;
int main()
{
    int m;
    cout << "Enter the size of the  array: ";
    cin >> m;
    int a[m] , c[m];
    int size = sizeof(a) / sizeof(a[0]);
    cout << "Enter the elements of  Matrix: " << endl;
    input(a, size);
    cout << "Displaying the  Matrix: " << endl;
    display(a, size);
    reverseOrder(a,c, size,0);
    cout << "Displaying the  Matrix in reverse order: " << endl;
    display(c, size);

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
int reverseOrder(int a[], int c[], int size, int i)
{
    if (i == size)
    {
        return c[size];
    }
    if (i < size)
    {
        c[i] = a[size - i - 1];
        reverseOrder(a, c, size, i + 1);
    }
}