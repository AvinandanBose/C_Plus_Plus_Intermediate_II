#include <iostream>
int input(int[], int);
void display(int[], int);
int fact(int[], int);
using namespace std;
int main()
{
    int m;
    cout << "Enter the size of the array: ";
    cin >> m;
    int arr[m];
    int res[m];
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Enter the elements of the array: " << endl;
    cout << "Note entered Value should be in the order 0,1,2,3,4,5..... " << endl;
    cout << " That is it depends on the total index i.e. size of the array.  " << endl;
    cout << " Also it depends on the value that the array contains in earlier index." << endl;
    cout << " Factorial can only conduct on size > 1" << endl;
    input(arr, size);
    cout << "Displaying the array: " << endl;
    display(arr, size);

    cout << "The factorial of the elements of the array is: " << endl;
    if (size > 1)
    {
        if (arr[0] == 0)
        {
            for (int i = 0; i < size; i++)
            {
                int n = arr[i];
                if (n == 0)
                {
                    res[i] = 1;
                }
                else
                {
                    cout<<i<<endl;
                    res[i] = fact(arr, n); // For array elements arranged in[0,1,2,3,... i.e. with  0]
                }
            }
            display(res, size);
        }
        else
        {
            for (int i = 0; i < size; i++)
            {
                int n = arr[i];

                res[i] = fact(arr, n - 1); // For array elements arranged in[1,2,3,... except 0]
            }
            display(res, size);
        }
    }

    else
    {
        cout << "The factorial is not possible";
    }

    return 0;
}
int input(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> array[i];
    }
    return array[size];
}
void display(int arr[], int size)
{
    cout << "[";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "]";
    cout << endl;
}
int fact(int arr[], int size)
{
    if (size == 0)
    {
        return 1;
    }
    else
    {
        return arr[size] * fact(arr, size - 1);
    }
}
/****************************************************************
 * Workings:
 * if a[0] =0
 *
 * And we have entries:
 * a[0] = 0
 * a[1] = 1
 * a[2] = 2
 * a[3] = 3
 * and size =4
 *
 * Hence already we have defined array have size 4
 *
 * for(i = 0 ; i < 4; i++){
 *   int n = a[0] = 0 ;
 *   if (n == 0){
 *
 *     res[0] =1;
 *    }
 *   i = 1:
 *      int n = a[1] = 1;
 *          else{
 *            res[1] = fact(a,1);
 *
 * fact(a[] , size=1){
 *
 * return arr[1] * fact(arr, 1-1 =0); i.e. [1*1 =1] => Pushed into the stack
 *
 * Next: size = 0;
 * return 1; // base condition ends the recursion
 *
 * }
 * Hence in Stack:
 * 1 (Push)
 * ----         => 1(pop)
 * Hence, res[1] = 1;
 *
 * Again: i = 2;
 * int n = a[2] = 2;
 * else{
 * res[2] = fact(a,2);
 *
 * fact(a[] , size=2){
 *
 * return arr[2] * fact(arr, 2-1 =1); i.e. [2*1 =2] => Pushed into the stack
 * return arr[1] * fact(arr, 1-1 =0); i.e. [1*1 =1]  => Pushed into the stack
 * Next: size = 0;
 * return 1; // base condition ends the recursion
 *
 * }
 *
 * Hence in Stack:
 *      2(Push)
 * --------- = 1*2 = 2 => result (popped out)
 *     1   (Push)
 *
 *
 * And it goes on ......
 *
 * if(a[0]>1){
 * for(i = 0 ; i < 4; i++){
 * 
 * 
 *  }
 *
 * }
 *
 *
 *
 *
 * }
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 * ****************************************************************/