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
    }
    else
    {
        cout << "Not a square matrix" << endl;
    }
}