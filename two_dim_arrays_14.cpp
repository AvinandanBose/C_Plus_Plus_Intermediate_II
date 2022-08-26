#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter Row of Matrix A: " << endl;
    cin >> m;
    cout << "Enter Column of Matrix A: " << endl;
    cin >> n;
    int a = m - 1, b = n - 1;
    int sign[m][n];
    int mat[m][n];
    int zero1[m][n];
    int zero2[m][n];
    int zero3[m][n];
    int zero4[m][n];
    int zero5[m][n];
    int zero6[m][n];
    int zero7[m][n];
    int zero8[m][n];
    int zero9[m][n];
    int cofact[m][n];
    int transpose[m][n];
    int cofact1, cofact2, cofact3, cofact4, cofact5, cofact6, cofact7, cofact8, cofact9;
    if (m == n)
    {
        if (m == 3 && n == 3)
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
            for (int i = 0; i < m; ++i)
            {
                for (int j = 0; j < n; ++j)
                {
                    zero1[i][j] = 0;
                    zero2[i][j] = 0;
                    zero3[i][j] = 0;
                    zero4[i][j] = 0;
                    zero5[i][j] = 0;
                    zero6[i][j] = 0;
                    zero7[i][j] = 0;
                    zero8[i][j] = 0;
                    zero9[i][j] = 0;
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
                    if (i != 1 && j != 0)
                    {
                        zero4[i][j] = mat[i][j];
                    }
                    if (i != 1 && j != 1)
                    {
                        zero5[i][j] = mat[i][j];
                    }
                    if (i != 1 && j != 2)
                    {
                        zero6[i][j] = mat[i][j];
                    }
                    if (i != 1 && j != 2)
                    {
                        zero6[i][j] = mat[i][j];
                    }
                    if (i != 2 && j != 0)
                    {
                        zero7[i][j] = mat[i][j];
                    }
                    if (i != 2 && j != 1)
                    {
                        zero8[i][j] = mat[i][j];
                    }
                    if (i != 2 && j != 2)
                    {
                        zero9[i][j] = mat[i][j];
                    }
                }
            }

            cout << "\n";
            cout << "The matrices to be made to get prepared for Adjoint are:";
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
            for (int i = 0; i < m; ++i)
            {
                cout << "|";
                for (int j = 0; j < n; j++)
                {
                    cout << zero4[i][j] << " ";
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
                    cout << zero5[i][j] << " ";
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
                    cout << zero6[i][j] << " ";
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
                    cout << zero7[i][j] << " ";
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
                    cout << zero8[i][j] << " ";
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
                    cout << zero9[i][j] << " ";
                }
                cout << "|";
                cout << endl;
            }

            int adj1[a][b] = {{zero1[1][1], zero1[1][2]}, {zero1[2][1], zero1[2][2]}};
            int adj2[a][b] = {{zero2[1][0], zero2[1][2]}, {zero2[2][0], zero2[2][2]}};
            int adj3[a][b] = {{zero3[1][0], zero3[1][1]}, {zero3[2][0], zero3[2][1]}};
            int adj4[a][b] = {{zero4[0][1], zero4[0][2]}, {zero4[2][1], zero4[2][2]}};
            int adj5[a][b] = {{zero5[0][0], zero5[0][2]}, {zero5[2][0], zero5[2][2]}};
            int adj6[a][b] = {{zero6[0][0], zero6[0][1]}, {zero6[2][0], zero6[2][1]}};
            int adj7[a][b] = {{zero7[0][1], zero7[0][2]}, {zero7[1][1], zero7[1][2]}};
            int adj8[a][b] = {{zero8[0][0], zero8[0][2]}, {zero8[1][0], zero8[1][2]}};
            int adj9[a][b] = {{zero9[0][0], zero9[0][1]}, {zero9[1][0], zero9[1][1]}};

            cout << "\n";
            cout << "The Adjoint Matrices  are:";
            cout << "\n";
            cout << "Adj1 ="
                 << "\n\n";
            for (int i = 0; i < a; ++i)
            {
                cout << "|";
                for (int j = 0; j < b; j++)
                {
                    cout << adj1[i][j] << " ";
                }
                cout << "|";
                cout << endl;
            }
            cout << "\n";
            cout << "Adj2 ="
                 << "\n\n";
            for (int i = 0; i < a; ++i)
            {
                cout << "|";
                for (int j = 0; j < b; j++)
                {
                    cout << adj2[i][j] << " ";
                }
                cout << "|";
                cout << endl;
            }
            cout << "\n";
            cout << "Adj3 ="
                 << "\n\n";
            for (int i = 0; i < a; ++i)
            {
                cout << "|";
                for (int j = 0; j < b; j++)
                {
                    cout << adj3[i][j] << " ";
                }
                cout << "|";
                cout << endl;
            }
            cout << "\n";
            cout << "Adj4 ="
                 << "\n\n";
            for (int i = 0; i < a; ++i)
            {
                cout << "|";
                for (int j = 0; j < b; j++)
                {
                    cout << adj4[i][j] << " ";
                }
                cout << "|";
                cout << endl;
            }
            cout << "\n";
            cout << "Adj5 ="
                 << "\n\n";
            for (int i = 0; i < a; ++i)
            {
                cout << "|";
                for (int j = 0; j < b; j++)
                {
                    cout << adj5[i][j] << " ";
                }
                cout << "|";
                cout << endl;
            }
            cout << "\n";
            cout << "Adj6 ="
                 << "\n\n";
            for (int i = 0; i < a; ++i)
            {
                cout << "|";
                for (int j = 0; j < b; j++)
                {
                    cout << adj6[i][j] << " ";
                }
                cout << "|";
                cout << endl;
            }
            cout << "\n";
            cout << "Adj7 ="
                 << "\n\n";
            for (int i = 0; i < a; ++i)
            {
                cout << "|";
                for (int j = 0; j < b; j++)
                {
                    cout << adj7[i][j] << " ";
                }
                cout << "|";
                cout << endl;
            }
            cout << "\n";
            cout << "Adj8 ="
                 << "\n\n";
            for (int i = 0; i < a; ++i)
            {
                cout << "|";
                for (int j = 0; j < b; j++)
                {
                    cout << adj8[i][j] << " ";
                }
                cout << "|";
                cout << endl;
            }
            cout << "\n";
            cout << "Adj9 ="
                 << "\n\n";
            for (int i = 0; i < a; ++i)
            {
                cout << "|";
                for (int j = 0; j < b; j++)
                {
                    cout << adj9[i][j] << " ";
                }

                cout << "|";
                cout << endl;
            }

            cout << "\n";
            cout << "The  cofactors => -1^(r+c) * det(Adj) where r=rows and c=columns" << endl;
            cout << "\n";

            cofact[0][0] = pow(-1, (a + b)) * (sign[0][0] * (adj1[0][0] * adj1[1][1] - adj1[0][1] * adj1[1][0]));
            cofact[0][1] = pow(-1, (a + b)) * (sign[0][1] * (adj2[0][0] * adj2[1][1] - adj2[0][1] * adj2[1][0]));
            cofact[0][2] = pow(-1, (a + b)) * (sign[0][2] * (adj3[0][0] * adj3[1][1] - adj3[0][1] * adj3[1][0]));
            cofact[1][0] = pow(-1, (a + b)) * (sign[1][0] * (adj4[0][0] * adj4[1][1] - adj4[0][1] * adj4[1][0]));
            cofact[1][1] = pow(-1, (a + b)) * (sign[1][1] * (adj5[0][0] * adj5[1][1] - adj5[0][1] * adj5[1][0]));
            cofact[1][2] = pow(-1, (a + b)) * (sign[1][2] * (adj6[0][0] * adj6[1][1] - adj6[0][1] * adj6[1][0]));
            cofact[2][0] = pow(-1, (a + b)) * (sign[2][0] * (adj7[0][0] * adj7[1][1] - adj7[0][1] * adj7[1][0]));
            cofact[2][1] = pow(-1, (a + b)) * (sign[2][1] * (adj8[0][0] * adj8[1][1] - adj8[0][1] * adj8[1][0]));
            cofact[2][2] = pow(-1, (a + b)) * (sign[2][2] * (adj9[0][0] * adj9[1][1] - adj9[0][1] * adj9[1][0]));

            for (int i = 0; i < m; ++i)
            {
                cout << "|";
                for (int j = 0; j < n; j++)
                {
                    cout << cofact[i][j] << " ";
                }

                cout << "|";
                cout << endl;
            }

            cout << "Transpose of Cofactor of  Matrix:" << endl;
            for (int i = 0; i < m; i++)
            {

                for (int j = 0; j < n; j++)
                {
                    transpose[j][i] = cofact[i][j];
                }
            }
            for (int i = 0; i < m; i++)
            {
                cout << "|";
                for (int j = 0; j < n; j++)
                {
                    cout << transpose[i][j] << " ";
                    ;
                }
                cout << "|";
                cout << endl;
            }
        }
        else{
            cout<<"Only  3x3 matrix for Adjoint and Cofactor Calculations.." << endl;
        }
    }
    else{
        cout << "Not a square matrix" << endl;
    }
    return 0;
}
