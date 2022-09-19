// Lower Triangular Matrix using Recursion

#include <iostream>
int input(int[][10], int, int);
void display(int, int, int[][10]);
void showLowerTriangularMatrix(int[][10], int, int, int, int);
using namespace std;
int main()
{

    int a[10][10];
    int m, n;
    cout << "Enter row  for Matrix A: " << endl;
    cin >> m;
    cout << "Enter columns  for Matrix A: " << endl;
    cin >> n;
    if (m == n)
    {
        cout << "Enter the elements of Matrix A: " << endl;
        input(a, m, n);
        cout << "Displaying the Matrix A: " << endl;
        display(m, n, a);
        cout << "Displaying the Lower Triangular Matrix: " << endl;
        showLowerTriangularMatrix(a, m, n, 0, 0);
    }
    else
    {
        cout << "Matrix is not square matrix" << endl;
    }

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
void showLowerTriangularMatrix(int arr[][10], int rows, int columns, int i, int j)
{
    if (i < rows)
    {
        if (j < columns)
        {
            if (j<i)
            {
                cout << arr[i][j] << " ";
            }
            showLowerTriangularMatrix(arr, rows, columns, i, j + 1);
        }
        else
        {
            cout << endl;
            showLowerTriangularMatrix(arr, rows, columns, i + 1, 0);
        }
    }
}