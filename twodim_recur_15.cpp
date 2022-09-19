// Find Largest Number using Recursion in a 2D array
#include <iostream>
int input(int[][10], int, int);
void display(int, int, int[][10]);
int findLargest(int[][10], int, int, int, int, int);

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

    int Largest = findLargest(a, m, n, 0, 0, a[0][0]);
    cout << "The Largest element in the matrix is: " << Largest << endl;

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

int findLargest(int arr[][10], int rows, int columns, int i, int j, int max)
{
    if (i == rows)
    {
        return max;
    }
    if (i < rows)
    {
        if (j < columns)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
            findLargest(arr, rows, columns, i, j + 1, max);
        }
        else
        {
            findLargest(arr, rows, columns, i + 1, 0, max);
        }
    }
}
