// Diagonal of a Matrix

#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter Row of Matrix A: " << endl;
    cin >> m;
    cout << "Enter Column of Matrix A: " << endl;
    cin >> n;
    int arr[m][n];
    int getRowLength = sizeof(arr) / sizeof(arr[0]);
    int getColumnLength = sizeof(arr[0]) / sizeof(arr[0][0]);
    if (getRowLength == getColumnLength)
    {
        cout << "Enter elements in the  Matrix: " << endl;
        cout << "\n";
        for (int i = 0; i < getRowLength; i++)
        {
            for (int j = 0; j < getColumnLength; j++)
            {
                cout << "arr[" << i << "][" << j << "] = ";
                cin >> arr[i][j];
            }
        }
        cout << "\n";
        cout << " Representation of Matrix  :(m x n) :" << endl;
        cout << "\n";
        for (int i = 0; i < getRowLength; i++)
        {
            cout << "|";
            for (int j = 0; j < getColumnLength; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << "|";
            cout << endl;
        }
        cout << "\n";
        cout << " Diagonal of a Matrix  :(m x n) :" << endl;
        cout << "\n";
        for (int i = 0; i < getRowLength; i++)
        {
            cout << "|";
            for (int j = 0; j < getColumnLength; j++)
            {
                if (i == j)
                {
                    cout << arr[i][j] << " ";
                }
                else
                {
                    cout << "0 ";
                }
            }
            cout << "|" ;
            cout << endl;
        }
    }
    else
    {
        cout << "Matrix is not a square matrix" << endl;
    }

    return 0;
}

/*****************************
 * Below the main diagonal is zero:
 *
 * In a 3x3 matrix:
 *
 * |a[0][0] a[0][1] a[0][2]|
 * |a[1][0] a[1][1] a[1][2]|
 * |a[2][0] a[2][1] a[2][2]|
 *
 * Diagonal :
 *
 * |a[0][0]            |
 * |      a[1][1]      |
 * |            a[2][2]|
 *
 *  Diagonal of a Matrix where Upper and Lower triangular is zero
 * |a[0][0]     0          0|
 * |0       a[1][1]        0|
 * |0        0       a[2][2]|
 *
 *
 *
 * *******************************/