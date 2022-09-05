// Delete an element from first index of an array
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
    cout << "1. Delete an element from first index in the array"
         << "\n"
         << "2.Exit" << endl;
    cin >> options;
    switch (options)
    {
    case 1:
        for (int i = 0; i < n; i++)
        {
            a[i] = a[i + 1];
            if (i == n - 1)
            {
                break;
            }
        }
        n = n - 1;
        cout << "Array after deletion of the first element: " << endl;
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
 * 1. Enter the size of the  array: 3
 * 2. Enter the elements of  Matrix:
 * 3. a[0] = 1
 * 4. a[1] = 2
 * 5. a[2] = 3
 * 6. Displaying the  Matrix:
 * 7. [1 2 3 ]
 * 8. 1. Delete an element from first index in the array
 *                 for int i= 0; i< 3; i++ :
 *                array[0] = array[0+1] = array[1] = 2
 *               array[1] = array[1+1] = array[2] = 3
 *
 *          And, array[2] = array[2+1] = array[3] = garbage value [Which is not needed]
 *                        Hence: if(i==3-1) break;
 *
 * Size  = Size -1 = 2
 *
 * 9. Array after deleting the element:
 * 10. [2 3 ]
 *
 * ***************************/