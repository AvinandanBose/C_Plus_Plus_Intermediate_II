// Addition of 2D array through recursion
#include <iostream>
void rules();
int input(int[][10], int, int);
void display(int, int, int[][10]);
int subTract(int[][10], int[][10], int[][10], int, int, int, int);
using namespace std;
int main()
{

    int mat1[10][10], mat2[10][10], result[10][10];
    int rowsize;
    int colsize;
    int i, j, k;
    rules();
    cout << "Enter row size" << endl;
    cin >> rowsize;
    cout << "Enter column size" << endl;
    cin >> colsize;

    if (rowsize == colsize)
    {

        cout << "Enter elements in 1st Matrix: " << endl;
        input(mat1, rowsize, colsize);
        cout << "Enter elements in 2nd Matrix: " << endl;
        input(mat2, rowsize, colsize);
        cout << "Displaying 1st Matrix:" << endl;
        display(rowsize, colsize, mat1);
        cout << "Displaying 2nd Matrix:" << endl;
        display(rowsize, colsize, mat2);

        subTract(mat1, mat2, result, rowsize, colsize, 0, 0);
        cout << "Displaying Resultant Matrix:" << endl;
        display(rowsize, colsize, result);
    }
    else
    {
        cout << "Row size and column size must be equal , else addition is not possible" << endl;
    }

    return 0;
}
void rules()
{
    cout << "Rule: rows and columns must be equal to perform addition of two matrices. " << endl;
    cout << "Hence column size and row size must be equal " << endl;
    cout << "  (m x n) +( m x n) format where, m=m and n=n"
         << "\n";
    cout << "And  m = number of rows and n = number of columns"
         << "\n\n";
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
        cout << "|";
        cout << endl;
    }
}
int subTract(int mat1[][10], int mat2[][10], int result[][10], int rows, int columns, int i, int j)
{
    if (i == rows)
    {
        return result[rows][columns];
    }

    if (i < rows)
    {
        if (j < columns)
        {
            result[i][j] = mat1[i][j] - mat2[i][j];
            subTract(mat1, mat2, result, rows, columns, i, j + 1);
        }
        else
        {
            subTract(mat1, mat2, result, rows, columns, i + 1, 0);
        }
    }
}