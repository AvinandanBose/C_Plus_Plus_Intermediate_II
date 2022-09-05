// insert an element into the any index of an array
#include <iostream>
using namespace std;
int main()
{
    int n, value, pos,options;
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
    cout << "1. Insert an element in any positional index in the array"
         << "\n"
         << "2.Exit" << endl;
    cin >> options;
    switch (options)
    {
    case 1:
        cout << "Enter the value of the element: ";
        cin >> value;
        cout << "Enter the position of the element: ";
        cin >> pos;
        n = n + 1;
        for (int i = n - 1; i >= pos; i--)
        {
            a[i] = a[i - 1];
        }
        a[pos] = value;
        cout << "Array after inserting the element: " << endl;
        cout << "[";
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << "]";
        cout << endl;
        goto Label;
        return 0;
    }
}

/******************************
 * Workings:
 * --------------
 * Enter the size of the  array: 3
 * a[0] = 1
 * a[1] = 2
 * a[2] = 3
 * Displaying the  Matrix:
 * [1 2 3 ]
 * 1. Insert an element in any position in the array
 *          Enter the value of the element: 4
 *         Enter the position of the element: 2
 *         Size = size + 1 = 4
 *          for(i = (size - 1)=(4-1)= 3; i >= pos (=2); i--)
 *         {
 *          array[i] = array[i - 1];
 *              i.e. array[3] = 3 = array[3 - 1] = array[2]
 *             i.e. array[2] = 2 = array[2 - 1] = array[1]
 *        }
 *       Now the array is: "
 *      [1 2 3 3 ]
 *          Next:
 *              array[pos] = value;
 *              i.e. array[2] = 4
 *          Now the array is:
 *                      [1 2 4 3 ]
 * ********************/