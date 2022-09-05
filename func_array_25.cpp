//delete an element from first index of an array
#include <iostream>
int input(int[], int);
void display(int[], int);
void deleteAnElementFromFirstIndex(int[], int, int);
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
    deleteAnElementFromFirstIndex(a, size, n);

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
void deleteAnElementFromFirstIndex(int array[], int size, int n)
{
Label:
    cout << "1. Delete an element from first index in the array"
         << "\n"
         << "2.Exit" << endl;
    cin >> n;
    switch (n)
    {
    case 1:
        for (int i = 0; i <size; i++)
        {
            array[i] = array[i + 1];
            if ( i == size - 1)
            {
                break;
            }
        }
        size = size - 1;
        cout << "Array after deleting the element: " << endl;
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