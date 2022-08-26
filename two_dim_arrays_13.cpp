#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter Row of Matrix : " << endl;
    cin >> m;
    cout << "Enter Column of Matrix : " << endl;
    cin >> n;
    int a = m-1, b = n-1;
    int mat[m][n];
    int sign[m][n];
    int adj[a][b];
    int cofact[a][b];
    int transpose[a][b];
    if (m == n)
    {
        if (m == 2 && n == 2)
        {
            for (int i = 0; i < m; ++i)
            {
                for (int j = 0; j < n; ++j)
                {
                    if (i == 0 && j == 0)
                    {
                        sign[i][j] = 1;
                    }
                    else if (i == 1 && j == 0)
                    {
                        sign[i][j] = -1;
                    }
                    else if ((i + j) % 2 == 0)
                    {
                        sign[i][j] = 1;
                    }
                    else
                    {
                        sign[i][j] = -1;
                    }
                }
            }
            cout << " After Assigning signs for the square matrix it looks like" << endl;
            cout << "\n";
            for (int i = 0; i < m; ++i)
            {
                cout << "|";
                for (int j = 0; j < n; j++)
                {
                    cout << sign[i][j] << " ";
                }
                cout << "|";
                cout << endl;
            }
            cout << endl;
            cout
                << "Enter elements in the  Matrix: " << endl;
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
            cout << "\n";
            cout << "Adjoint of (2x2) matrix is same as Matrix :" << endl;
            adj[0][0] = (mat[0][0]*mat[1][1])-(mat[0][1]*mat[1][0]);
            cout << "[" << adj[0][0] << "]" << endl;
            cout << "Cofactor Matrix of (2x2) matrix :" << endl;
            cofact[0][0] = pow(-1, (a + b)) * (sign[0][0] * (adj[0][0]));
            cout << "[" << cofact[0][0] << "]" << endl;
            cout << " Transpose of Cofactor matrix in  :(m x n) : initiating...." << endl;
            for (int i = 0; i < a; i++)
            {

                for (int j = 0; j < b; j++)
                {
                    transpose[j][i] = cofact[i][j];
                }
            }
            cout << " Representation of Transposed Cofactor Matrix  :(m x n) :" << endl;

            cout << "\n";

            for (int i = 0; i < a; i++)
            {
                cout << "|";
                for (int j = 0; j < b; j++)
                {
                    cout << transpose[i][j] << " ";
                }
                cout << "|";
                cout << endl;
            }
        }
    }
}