// insert an element into the last index of an array
#include <iostream>
using namespace std;
int main()
{
    int n, value, options;
    cout << "Enter the size of the array: ";
    cin >> n;
    int a[n];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    cout << "Displaying the array: " << endl;
    cout << "[";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "]";
    cout << endl;
Label:
    cout << "1. Insert an element from last indext in the array"
         << "\n"
         << "2.Exit" << endl;
    cin >> options;
    switch (options)
    {
    case 1:
        cout << "Enter the value of the element: ";
        cin >> value;
        n = n + 1;
        a[n - 1] = value;
        cout << "Array after inserting the element: " << endl;
        cout << "[";
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << "]";
        cout << endl;
        goto Label;
        break;
    case 2:
        exit(0);
        break;
    default:
        cout << "Invalid choice" << endl;

        return 0;
    }
}

/****************************************************************
 * Workings:
 *  Enter the size of the  array: 3
 * a[0] = 1
 * a[1] = 2
 * a[2] = 3
 * Displaying the  Matrix:
 * [1 2 3 ]
 * 1. Insert an element from last indext in the array
 *                Enter the value of the element:4
 *                Size = Size+1 = 4
 *                array[Size-1 =3] = value = 4
 *               Array after inserting the element:
 *              [1 2 3 4 ]
 * *********************************************************/