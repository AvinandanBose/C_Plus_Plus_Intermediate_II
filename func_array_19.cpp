#include <iostream>
int input(int[], int);
void display(int[], int);
int secondsmallest(int[], int);
using namespace std;
int main()
{
    int m;
    cout << "Enter the size of the 1st array: ";
    cin >> m;
    int a[m];
    int size = sizeof(a) / sizeof(a[0]);
    cout << "Enter the elements of 1st  Matrix: " << endl;
    input(a, size);
    cout << "Displaying the  Matrix: " << endl;
    display(a, size);
    int secondsmallNum = secondsmallest(a, size);
    cout << "The second smallest number in the array is: " << secondsmallNum << endl;
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
int secondsmallest(int arr[], int size)
{
    int i, first, second;
    if (arr[0] < arr[1])
    {
        first = arr[0];
        second = arr[1];
    }
    else
    {
        first = arr[1];
        second = arr[0];
    }
    for (i = 2; i < size; i++)
    {
        if (arr[i] < first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] < second && arr[i] > first && arr[i] != first)
        {
            second = arr[i];
        }
    }
    return second;
}
/******************************************************
 * Workings:
 *size = 5
 *arr = [23, 31,1,2,88]
 *     if(arr[0]=23 < arr[1]=31)==True:
 *        first = arr[0]=23
 *       second = arr[1]=31
 *
 *    for(i=2; i<5; i++):
 *          if(arr[2]=1 < first=23)==True:
 *              second = first=23
 *              first = arr[2]=1
 *
 *     for(i=3; i<5; i++):
 *
 *          if(arr[3]=2 < first=1)==false:
 *          elseif(arr[3]=2 < second=23 && arr[3]=2 > first=1 && arr[3]=2 != first=1)==True:
 *             second = arr[3]=2
 * 
 *    for(i=4; i<5; i++):
 *         if(arr[4]=88 < first=1)==false:
 *        elseif(arr[4]=88 < second=2 && arr[4]=88 > first=1 && arr[4]=88 != first=1)==false:
 *
 *    return second = 2
 *
 * ******************************************************/