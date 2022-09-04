#include<iostream>
int input(int[], int);
void display(int[], int);
int secondLargest(int[], int);
using namespace std;
int main()
{
    int m;
    cout<<"Enter the size of the 1st array: ";
    cin>>m;
    int a[m];
    int size = sizeof(a) / sizeof(a[0]);
    cout<<"Enter the elements of 1st  Matrix: "<<endl;
    input(a, size);
    cout<<"Displaying the  Matrix: "<<endl;
    display(a, size);
    int secondlargeNum = secondLargest(a, size);
    cout<<"The second largest number in the array is: "<<secondlargeNum<<endl;
    return 0;
}

int input(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout <<  "a[" << i << "] = ";
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
int secondLargest(int arr[], int size)
{
    int i, first, second;
    if (arr[0] > arr[1])
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
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] < first && arr[i] != first)
        {
            second = arr[i];
        }
    }
    return second;                                  
}

/****************************************************************
 * Workings:
 * size = 5
 * arr = [23, 31,1,2,88]
 * if(arr[0]=23 > arr[1]=31) ==false: 
 * else:
 *      first = arr[1] = 31
 *     second = arr[0] = 23
 * 
 * Already assigning values are over.
 * for(i=2; i<5; i++):
 *     if(arr[2]=1 > first=31) ==false:
 *    else if(arr[2]=1 > second=23[false] && arr[2]=1 < first=31 && arr[2]=1 != first=31) ==false:
 * 
 * for(i=3; i<5; i++):
 *    if(arr[3]=2 > first=31) ==false:
 *   else if(arr[3]=2 > second=23[false] && arr[3]=2 < first=31 && arr[3]=2 != first=31) ==false:
 * 
 * for(i=4; i<5; i++):
 *   if(arr[4]=88 > first=31) ==true:
 *     second = first = 31
 *    first = arr[4] = 88
 * 
 * return second = 31
 * ****************************************************************/