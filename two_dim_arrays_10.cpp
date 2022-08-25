// Assigning signs for the square matrix
#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter Row of Matrix A: " << endl;
    cin >> m;
    cout << "Enter Column of Matrix A: " << endl;
    cin >> n;
    int sign[m][n];
    int mat[m][n];
    int zero1[m][n];
    int zero2[m][n];
    int zero3[m][n];
    int det1;
    int det2;
    int det3;
    int determinant;

    cout << "Rule the Matrix should be square matrix i.e. ((1x1),(2x2),(3x3)...etc)" << endl;
    cout << "Assigning signs for the square matrix" << endl;
    if (m == n)
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
        cout << "\n";
        if (m == 1 && n == 1)
        {
            determinant = sign[0][0] * mat[0][0];
            cout << "Determinant of 1x1 matrix" << endl;

            cout << determinant << endl;
        }
        else if (m == 2 && n == 2)
        {
            det1 = sign[0][0] * (mat[0][0] * mat[1][1]);
            det2 = sign[1][0] * (mat[0][1] * mat[1][0]);
            determinant = det1 + det2;
            cout << "Determinant of 2x2 matrix" << endl;

            cout << determinant << endl;
        }
        else if (m == 3 && n == 3)
        {
            cout << "Determinant for 3 x 3 matrix"
                 << "\n"
                 << endl;
            // Initializing elements of Null matrix with 0.
            for (int i = 0; i < m; ++i)
            {
                for (int j = 0; j < n; ++j)
                {
                    zero1[i][j] = 0;
                    zero2[i][j] = 0;
                    zero3[i][j] = 0;
                }
            }
            for (int i = 0; i < m; ++i)
            {
                for (int j = 0; j < n; ++j)
                {
                    if (i != 0 && j != 0)
                    {
                        zero1[i][j] = mat[i][j];
                    }
                    if (i != 0 && j != 1)
                    {
                        zero2[i][j] = mat[i][j];
                    }
                    if (i != 0 && j != 2)
                    {
                        zero3[i][j] = mat[i][j];
                    }
                }
            }
            cout << "\n";
            cout << "The matrices to be made to get determinant are:";
            cout << "\n";
            for (int i = 0; i < m; ++i)
            {
                cout << "|";
                for (int j = 0; j < n; j++)
                {
                    cout << zero1[i][j] << " ";
                }
                cout << "|";
                cout << endl;
            }
            cout << "\n";
            for (int i = 0; i < m; ++i)
            {
                cout << "|";
                for (int j = 0; j < n; j++)
                {
                    cout << zero2[i][j] << " ";
                }
                cout << "|";
                cout << endl;
            }
            cout << "\n";
            for (int i = 0; i < m; ++i)
            {
                cout << "|";
                for (int j = 0; j < n; j++)
                {
                    cout << zero3[i][j] << " ";
                }
                cout << "|";
                cout << endl;
            }
            cout << "\n";

            det1 = sign[0][0] * mat[0][0] * ((zero1[1][1] * zero1[2][2]) - (zero1[1][2] * zero1[1][2]));
            det2 = sign[0][1] * mat[0][1] * ((zero2[1][0] * zero2[2][2]) - (zero2[1][2] * zero2[2][0]));
            det3 = sign[0][2] * mat[0][2] * ((zero3[1][0] * zero3[1][1]) - (zero3[2][0] * zero3[2][1]));

            determinant = det1 + det2 + det3;
            cout << "Determinant of 3x3 matrix" << endl;

            cout << determinant << endl;
        }
    }
    else
    {
        cout << "Not a square matrix" << endl;
    }
}