// Upper Trinagular and Lower Triangular Matrix
// Definition: The upper triangular matrix has all the elements below the main diagonal as zero
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
                if (i <= j)
                {
                    cout << "arr[" << i << "][" << j << "] = ";
                    cin >> arr[i][j];
                }
                else
                {
                    arr[i][j] = 0;
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
        cout << " Upper Triangular Matrix  :(m x n) :" << endl;
        cout << "\n";
        for (int i = 0; i < getRowLength; i++)
        {
            
            for ( int j = 0; j < getColumnLength; j++)
            {
                if (i < j)
                {
                    cout << arr[i][j] << " ";
                }
                
            }
        
            cout << endl;
        }
    }
    else{
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
 * Upper Triangular Matrix with Diagonal and Lower Triangular Matrix as Zeroes:
 * |a[0][0] a[0][1] a[0][2]|
 * |0       a[1][1] a[1][2]|
 * |0       0       a[2][2]|
 *
 * Only Upper Triangular Matrix with Diagonal :
 * |        a[0][1] a[0][2]|
 * |                a[1][2]|
 * |                       |
 *
 * Note:
 * int i=0 ; i<getRowLength; i++
 *   int j = 0; j < getColumnLength; i++
 *
 * Therefore i==j and i<j , we need elements
 * And rest are zeroes.
 *
 * Similarly,
 * We print the elements when :  i<j which are only Upper triangular matrix:
 * Those elements are Upper Triangular Matrix.
 *
 *
 *
 *
 * *******************************/