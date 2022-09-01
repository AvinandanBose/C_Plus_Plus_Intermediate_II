// union of 2 arrays having distinct elements of same size
#include <iostream>
int input(int[], int, char);
void display(int[], int);
int bubblesort(int[], int);
int checkequalelements(int[], int[], int);
int unequalelements(int[], int[], int);
int unionofTwoArray(int[], int[], int[], int, int);
using namespace std;
int main()
{
    int m;
    cout << "Enter the size of the  array: ";
    cin >> m;
    int a[m], b[m];
    int size = sizeof(a) / sizeof(a[0]);
    char arr1 = 'a';
    char arr2 = 'b';
    cout << "Enter the elements of 1st Matrix: " << endl;
    input(a, size, arr1);
    bubblesort(a, size);
    cout << "Displaying the first Matrix: " << endl;
    display(a, size);
    cout << "Enter the elements of 2nd Matrix: " << endl;
    input(b, size, arr2);
    bubblesort(b, size);
    cout << "Displaying the 2nd Matrix: " << endl;
    display(b, size);
    int equalelements = checkequalelements(a, b, size);
    int unequal = (size*2) - (equalelements*2);
    int size2 = equalelements + unequal;
    int c[size2];
    unionofTwoArray (a,b,c,size, size2);
    cout << "Displaying the Union of 2 Matrix: " << endl;
    display(c, size2);
    return 0;
}
int input(int a[], int size, char arr)
{
    if (arr == 'a')
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr << "[" << i << "] = ";
            cin >> a[i];
        }
    }
    else
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr << "[" << i << "] = ";
            cin >> a[i];
        }
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

int checkequalelements(int a[], int b[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        int num = a[i];
        for (int j = 0; j < size; j++)
        {
            if (num == b[j])
            {

                count = count + 1;
            }
        }
    }
    return count;
}

int bubblesort(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr[size];
}
int unionofTwoArray(int arr1[], int arr2[], int res[], int size, int size2){
    
    int i = 0, j = 0, k = 0;
    while (i < size && j < size)
    {
        if (arr1[i] < arr2[j])
        {
            res[k] = arr1[i];
            i++;
            k++;
        }
        else if (arr2[j] < arr1[i])
        {
            res[k] = arr2[j];
            j++;
            k++;
        }
        else
        {
            res[k] = arr1[i];
            k++; 
            i++;
            j++;
        }
    }
    if(i==size){
        while(j<size){
            res[k] = arr2[j];
            k++;
            j++;
        }
    }
    else{
        while(i<size){
            res[k] = arr1[i];
            k++;
            i++;
        }
    }
    
    
    return res[size2];
}

/****************************************************************
 * Working of the program
 * Enter the size of the  array: 5
 * Enter the elements of 1st Matrix:
 * a[0] = 1
 * a[1] = 2
 * a[2] = 3
 * a[3] = 4
 * a[4] = 5
 * Displaying the first Matrix:
 * [1 2 3 4 5]
 * Enter the elements of 2nd Matrix:
 * b[0] = 4
 * b[1] = 5
 * b[2] = 6
 * b[3] = 7
 * b[4] = 8
 * Displaying the 2nd Matrix:
 * [4 5 6 7 8]
 *
 * //Size of the Resultant Matrix
 * Now equal elements will be present in same and equal quantity in both the array:
 * Say :
 * a[3] = 4 = b[0] = 4
 * a[4] = 5 = b[1] = 5
 * Hence no. of equal elements is 2 in both the array. = 4
 * And size 5 in total present in both the Matrix Hence:
 * Size of the Resultant Array = (5*2) - (2*2) = 6
 * 
 * Displaying the Union of 2 Matrix:
 * while (i=0 < 5 && j=0 < 5):
 *          arr1[i=0]=1 < arr2[j=0] = 4 == true:
 *          res[k=0] = arr1[i=0]=1
 *          i = 1
 *          k = 1
 * while (i=1 < 5 && j=0 < 5):
 *          arr1[i=1]=2 < arr2[j=0] = 4 == true:
 *          res[k=1] = arr1[i=1]=2
 *          i = 2
 *          k = 2
 * while (i=2 < 5 && j=0 < 5):
 *         arr1[i=2]=3 < arr2[j=0] = 4 == true:
 *        res[k=2] = arr1[i=2]=3
 *          i = 3
 *          k = 3
 * while (i=3 < 5 && j=0 < 5):
 *         arr1[i=3]=4 < arr2[j=0] = 4 == false:
 *
 * else if (arr2[j=0]=4 < arr1[i=3]=4): false;
 *
 * else
 *          res[k=3] = arr1[i=3]=4
 *          i = 4
 *          k = 4
 *          j=1
 * while (i=4 < 5 && j=1 < 5):
 *         arr1[i=4]=5 < arr2[j=1] = 5 == false:
 *
 * else if (arr2[j=1]=5 < arr1[i=4]=5): false;
 *
 * else
 *         res[k=4] = arr1[i=4]=5
 *          i = 5
 *          k = 5
 *          j=2
 * while (i=5 < 5 && j=2 < 5):false
 *
 * if(i =5 == Size =5): True :
 *          while(j=2 < 5): True:
 *              res[k=5] = arr2[j=2] = 6
 *              k = 6
 *              j=3
 *          while(j=3<5): True:
 *               res[k=6] = arr2[j=3] = 7
 *               k = 7
 *               j=4
 *
 *          while(j=4 < 5): True:
 *              res[k=7] = arr2[j=4] = 8
 *              k = 8
 *              j =5
 *         while(j=5 < 5): False:
 *              END OF THE PROGRAM
 *
 * ********************/