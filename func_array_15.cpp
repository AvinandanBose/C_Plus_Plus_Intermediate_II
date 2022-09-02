#include <iostream>
int input(int[], int, char);
void display(int[], int);
int add(int[],int[], int[], int);
using namespace std;
int main()
{
    int m;
    cout << "Enter the size of the  array: ";
    cin >> m;
    int a[m], b[m], result[m];
    char arr1 = 'a';
    char arr2 = 'b';
    int size = sizeof(a) / sizeof(a[0]);
    cout << "Enter the elements of 1st  Matrix: " << endl;
    input(a, size,arr1);
    cout << "Displaying the  Matrix: " << endl;
    display(a, size);
    cout << "Enter the elements of  2nd Matrix: " << endl;
    input(b, size,arr2);
    cout << "Displaying the  Matrix: " << endl;
    display(b, size);
    add(a, b, result, size);
    cout << "Displaying the  Addition of 2 Square Matrix: " << endl;
    display(result, size);
    

    return 0;
}

int input(int a[], int size, char arr)
{
    if (arr == 'a')
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr << "[" << i << "] = ";
            cin >> a[i];
        }
    }
    else
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr << "[" << i << "] = ";
            cin >> a[i];
        }
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
int add(int a[], int b[], int result[],int size)
{
    for (int i = 0; i < size; i++)
    {
        result[i] = a[i] + b[i];
    }
    return result[size];
}