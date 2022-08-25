// Creation of Null Matrix
#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter Row of Matrix A: " << endl;
    cin >> m;
    cout << "Enter Column of Matrix A: " << endl;
    cin >> n;
    int zero[m][n];

    // Initializing elements of Null matrix with 0.
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            zero[i][j] = 0;
        }
    }

    cout << " Null Matrix looks like...."
         << endl;
    for (int i = 0; i < m; ++i)
    {
        cout << "|";
        for (int j = 0; j < n; j++)
        {
            cout << zero[i][j] << " ";
        }
        cout << "|";
        cout << endl;
    }
}