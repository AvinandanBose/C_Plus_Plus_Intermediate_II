#include <iostream>
int input(int *, int, char);
void display(int *, int);
int multiply(int *, int *, int *, int );
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
    input(a, size, arr1);
    cout << "Displaying the  Matrix: " << endl;
    display(a, size);
    cout << "Enter the elements of  2nd Matrix: " << endl;
    input(b, size, arr2);
    cout << "Displaying the  Matrix: " << endl;
    display(b, size);
    int size2 = multiply(a, b, result, size);
    cout << "Displaying the Multplication of 2 Square 1-D Matrix: " << endl;
    display(result, size2);

    return 0;
}
int input(int *p, int size, char arr)
{
    if (arr == 'a')
    {
        for (int i = 0; i < size; i++)
        {
            cout << "a[" << i << "]: ";
            cin >> *(p + i);
        }
    }
    else
    {
        for (int i = 0; i < size; i++)
        {
            cout << "b[" << i << "]: ";
            cin >> *(p + i);
        }
    }

    cout << endl;
    return p[size];
}
void display(int *p, int size)
{
    cout << "[";
    for (int i = 0; i < size; i++)
    {
        cout << *(p + i) << " ";
    }
    cout << "]";
    cout << endl;
}
int multiply(int *p1, int *p2, int *p3, int size)
{
    int sum = 0, temp;
    for (int i = 0; i < size; i++)
    {
        sum = sum + ((*(p1 + i)) * (*(p2 + i)));
    }
    *p3 = sum;
    
    return 1; // size of the result array
}