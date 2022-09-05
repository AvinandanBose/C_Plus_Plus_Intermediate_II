// delete an element from any position in the array
#include <iostream>
int input(int[], int);
void display(int[], int);
void deleteAnElementFromAnyPos(int[], int, int);
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
    deleteAnElementFromAnyPos(a, size, n);

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
void deleteAnElementFromAnyPos(int array[], int size, int n)
{
Label:
    cout << "1. Delete an element in any position in the array"
         << "\n"
         << "2.Exit" << endl;
    cin >> n;
    switch (n)
    {
    case 1:
        int pos;
        cout << "Enter the position of the element: ";
        cin >> pos;
        for (int i = pos; i < size; i++)
        {
            array[i] = array[i + 1];
            if(pos = size-1 && i == size-1){
                break;
            }
        }

        size = size - 1;
        cout << "The array after deleting the element is: " << endl;
        display(array, size);
        goto Label;
        break;
    case 2:
        exit(0);
        break;
    default:
        cout << "Invalid input" << endl;
        goto Label;
        break;
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