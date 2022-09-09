#include <iostream>
int input(int[], int, char);
void display(int[], int);
int subtract(int[], int[], int[], int);
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
    subtract(a, b, result, size);
    cout << "Displaying the  Subtraction of 2 Square Matrix: " << endl;
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
int subtract(int a[], int b[], int result[], int size)
{
    if(size == 0){
        return 0;
    }
    else{
        result[size-1] = a[size-1] - b[size-1];
        subtract(a, b, result, size-1);
    }
    return result[size];
}

/******************************
 * Workings
 * Let size =3
 * a[0] = 1
 * a[1] = 2
 * a[2] = 3
 *
 * b[0] = 4
 * b[1] = 5
 * b[2] = 6
 *
 * Now in Recursion:
 *
 * result[size-1 => 3-1 = 2] = a[size-1 => 3-1 = 2] - b[size-1 => 3-1 = 2] = 3 - 6 = -3
 *
 *
 * result[size-1 => 2-1 = 1] = a[size-1 => 2-1 = 1] + b[size-1 => 2-1 = 1] = 2 - 5 = -3
 *
 * result[size-1 => 1-1 = 0] = a[size-1 => 1-1 = 0] + b[size-1 => 1-1 = 0] = 1 - 4 = -3
 *
 * Now the recursion will end and the result will be:
 * 
 * result[0] = -3
 * result[1] = -3
 * result[2] = -3
 * 
 *
 *
 *
 *
 *
 *
 * *******************************/