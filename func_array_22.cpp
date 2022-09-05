#include <iostream>
int input(int[], int);
void display(int[], int);
void enterAnElementFromFirstIndex(int[], int, int);
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
    enterAnElementFromFirstIndex(a, size, n);

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
void enterAnElementFromFirstIndex(int array[], int size, int n)
{
Label:
    cout << "1. Insert an element in first index in the array"
         << "\n"
         << "2.Exit" << endl;
    cin >> n;
    switch (n)
    {
    case 1:
        int  value;
        cout << "Enter the value of the element: ";
        cin >> value;
        size = size + 1;
        for (int i = size - 1; i >= 0; i--)
        {
            array[i] = array[i - 1];
            if(i == 0)
            {
                break;
            }


        }
        array[0] = value;
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
 *      [garbagevalue 1 2 3 ]
 *          Next:
 *              array[0] = value;
 *              i.e. array[0] = 4
 *          Now the array is:
 *                      [4 1 2 3 ]
 * ********************/