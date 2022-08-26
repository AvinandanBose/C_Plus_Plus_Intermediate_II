#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter Row of Matrix A: " << endl;
    cin >> m;
    cout << "Enter Column of Matrix A: " << endl;
    cin >> n;
    if(m==3 && n==3)
    {
        int mat[m][n];
        int temp[m][n];

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
        cout << endl;
        for (int i = 0; i < m; i++)
        {

            for (int j = 0; j < n; j++)
            {
                if ((i + j) == 4)
                {
                    temp[i][j] = mat[i][j];
                }
                else
                {
                    temp[i][j] = 0;
                }
            }
        }
        cout << endl;

        for (int i = 0; i < m; i++)
        {
            cout << "|";
            for (int j = 0; j < n; j++)
            {
                cout << temp[i][j] << " ";
            }
            cout << "|";
            cout << endl;
        }
        cout << endl;
        cout << " Last digit entered in a 3x3 matrix." << endl;
        for (int i = 0; i < m; i++)
        {

            for (int j = 0; j < n; j++)
            {
                if (temp[i][j] != 0)
                {
                    cout << temp[i][j] << endl;
                }
            }
        }
    }
    else
    {
        cout << "Not 3x3 matrix!" << endl;
    }
    
}
