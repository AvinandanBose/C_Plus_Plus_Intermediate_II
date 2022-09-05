// Delete an element from Last index of an array
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
    cout << "1. Delete an element from last index in the array"
         << "\n"
         << "2.Exit" << endl;
    cin >> options;
    switch (options)
    {
    case 1:
        n = n - 1;
        cout << "Array after deletion of the last element: " << endl;
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

