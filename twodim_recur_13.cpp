// Find 2nd Smallest Number in 2D Array Using Recursion
#include <iostream>
int input(int[][10], int, int);
void display(int, int, int[][10]);
int findSecondSmallest(int [][10], int , int , int , int ) ;
int subFindSecondSmallest(int[][10], int, int, int, int, int, int);

using namespace std;
int main()
{

    int a[10][10];
    int m, n;
    cout << "Enter row  for Matrix A: " << endl;
    cin >> m;
    cout << "Enter columns  for Matrix A: " << endl;
    cin >> n;
    cout << "Enter the elements of Matrix A: " << endl;
    input(a, m, n);
    cout << "Displaying the Matrix A: " << endl;
    display(m, n, a);

    int secondSmallest = findSecondSmallest(a, m, n, 0, 0 );
    cout << "The second smallest element in the matrix is: " << findSecondSmallest(a, m, n, 0, 0 ) << endl;

    return 0;
}
int input(int array[][10], int rows, int columns)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << "arr[" << i << "][" << j << "] = ";
            cin >> array[i][j];
        }
    }
    return array[rows][10];
}

void display(int rows, int columns, int array[][10])
{
    for (int i = 0; i < rows; i++)
    {
        cout << "|";
        for (int j = 0; j < columns; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << "|" << endl;
    }
}

int findSecondSmallest(int arr[][10], int rows, int columns, int min1, int min2)
{
    if (arr[0][0] < arr[0][1])
    {
        min1 = arr[0][0];
        min2 = arr[0][1];
    }
    else
    {
        min1 = arr[0][1];
        min2 = arr[0][0];
    }

    int res = subFindSecondSmallest(arr, rows, columns,0, 2, min1, min2);
    return res;
}

int subFindSecondSmallest(int arr[][10], int rows, int columns, int i, int j, int min1, int min2)

{

    if (i == rows)
    {
        return min2;
    }

    if (j == columns)
    {
        return subFindSecondSmallest(arr, rows, columns, i + 1, 0, min1, min2);
    }

    if (arr[i][j] < min1)
    {
        min2 = min1;
        min1 = arr[i][j];
    }
    else if (arr[i][j] < min2 && arr[i][j] != min1)
    {
        min2 = arr[i][j];
    }

    return subFindSecondSmallest(arr, rows, columns, i, j + 1,  min1, min2);

}
// Note only thing we have to remember is Recursion though looks like loop but:
// 1. It has a base case
// 2. It has a recursive call
// 3. It has a condition to stop the recursive call
// 4. It has a condition to make the recursive call
// And most important thing is when it is called it starts from the first line of the function and when it returns it returns from the last line of the function.
// Hence here we are assigning :
/*****************************
 * if (arr[0][0] < arr[0][1])
    {
        min1 = arr[0][0];
        min2 = arr[0][1];
    }
    else
    {
        min1 = arr[0][1];
        min2 = arr[0][0];
    }
 *
 Hence Calculation should be done in another function if called recursive,
 *While in Loop we donot need to do it as till the loop ends , the calculation goes on...
 *
 * Hence in recursion to avoid such simultaneous assigning of values ,
 * we use another function to do the calculation and return the value to the main function.
 *
 *
 *
 * *******************************/