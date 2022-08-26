#include <iostream>

using namespace std;
int main()
{
    int m, n;
    cout << "Enter Row of Matrix : " << endl;
    cin >> m;
    cout << "Enter Column of Matrix : " << endl;
    cin >> n;
    int mat[m][n];
    int transpose[m][n];
    cout << "Enter elements in the  Matrix: " << endl;
    cout << "\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "mat[" << i << "][" << j << "] = ";
            cin >> mat[i][j];
        }
    }
    cout << "\n";

    cout << " Representation of Matrix  :(m x n) :" << endl;

    cout << "\n";

    for (int i = 0; i < m; i++)
    {
        cout << "|";
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << "|";
        cout << endl;
    }
    cout << " Transpose of 2D matrix in  :(m x n) : initiating...." << endl;
    for (int i = 0; i < m; i++)
    {
        
        for (int j = 0; j < n; j++)
        {
            transpose[j][i] = mat[i][j];
        }
    }
    cout << " Representation of Transposed Matrix  :(m x n) :" << endl;

    cout << "\n";

    for (int i = 0; i < m; i++)
    {
        cout << "|";
        for (int j = 0; j < n; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << "|";
        cout << endl;
    }

    return 0;
}
