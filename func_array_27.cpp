//swapping in array with function
#include <iostream>
int input(int[], int);
void display(int[], int);
int swapping(int[], int);
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
    int res = swapping(a, size);
    cout << "Displaying the  Swapped Matrix: " << endl;
    display(a, size);

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
int swapping(int array[], int size)
{
    int pos1, pos2;
    cout << "Enter the position of the first element: ";
    cin >> pos1;
    cout << "Enter the position of the second element: ";
    cin >> pos2;
    int temp = array[pos1];
    array[pos1] = array[pos2];
    array[pos2] = temp;

    return size;
}
// Language: cpp


