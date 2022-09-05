// Delete an element from first index of an array
#include <iostream>
using namespace std;
int main()
{
    int n, value, options,pos;
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
        cout << "Enter the position of the element: ";
        cin >> pos;
        for (int i = pos; i < n; i++)
        {
            a[i] = a[i + 1];
            if (pos = n - 1 && i == n - 1)
            {
                break;
            }
        }
        n = n - 1;
        cout << "Array after deletion of the  element: " << endl;
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
 * Workings:
 * 1. Enter the size of the  array: 3
 * 2. Enter the elements of  Matrix:
 * 3. a[0] = 1
 * 4. a[1] = 2
 * 5. a[2] = 3
 * 6. Displaying the  Matrix:
 * 7. [1 2 3 ]
 * 8. Enter position : 1
 * 8. 1. Delete an element in any position in the array
 *                 for(int i = 1; i < 3; i++){
 *                    array[1]=2 = array[1 + 1]=arr[2];
 *
 *                   Now if array[i=2] , then array[2] = array[2 + 1]= arr[3]; Hence break;
 *                }
 * 9. After array arrangement we have:
 * 10. [1 3 3]
 * 9. The array after deleting the element is:
 * 10. [1 3 ]
 *
 * ****************************************************************/
