// insert an element into the first index of an array
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
    cout << "1. Insert an element in first index in the array"
         << "\n"
         << "2.Exit" << endl;
    cin >> options;
    switch (options)
    {
    case 1:
        cout << "Enter the value of the element: ";
        cin >> value;
        n = n + 1;
        for (int i = n - 1; i >= 0; i--)
        {
            a[i] = a[i - 1];
            if (i == 0)
            {
                break;
            }
        }
        a[0] = value;
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

/******************************
 * Workings:
 * --------------
 * Enter the size of the  array: 3
 * a[0] = 1
 * a[1] = 2
 * a[2] = 3
 * Displaying the  Matrix:
 * [1 2 3 ]
 * 1. Insert an element in first index in the array
 *          Enter the value of the element: 4
 *         Size = size + 1 = 4
 *          for(i = (size - 1)=(4-1)= 3; i >= 0; i--)
 *         {
 *          array[i] = array[i - 1];
 *              i.e. array[3]  = array[3 - 1] = array[2]=3
 *             i.e. array[2]  = array[2 - 1] = array[1]=2
 *            i.e. array[1]  = array[1 - 1] = array[0]=1
 *                 if: i == 0
 *                      i.e. It will happen :array[0]  = array[0 - 1] = array[-1]=0
 *                      Hence, break;
 *        }
 *       Now the array is: "
 *      [1 1 2 3 ] as a[0] is already 1
 *          Next:
 *              array[0] = value;
 *              i.e. array[0] = 4
 *          Now the array is:
 *                      [4 1 2 3 ]
 * ********************/