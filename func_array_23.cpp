#include <iostream>
int input(int[], int);
void display(int[], int);
void enterAnElementFromAnyPos(int[], int, int);
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
    enterAnElementFromAnyPos(a, size, n);

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
void enterAnElementFromAnyPos(int array[], int size, int n)
{
Label:
    cout << "1. Insert an element in any position in the array"
         << "\n"
         << "2.Exit" << endl;
    cin >> n;
    switch (n)
    {
    case 1:
        int pos, value;
        
        cout << "Enter the value of the element: ";
        cin >> value;
        cout << "Enter the position of the element: ";
        cin >> pos;
        size = size + 1;
        for (int i = size - 1; i >= pos; i--)
        {
            array[i] = array[i - 1];
        }
        display(array, size);
        array[pos] = value;

        cout << "Array after inserting the element: " << endl;
        display(array, size);                               
        goto Label;
        break;
    case 2:
        exit(0);
        break;
    default:
        cout << "Invalid choice" << endl;
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