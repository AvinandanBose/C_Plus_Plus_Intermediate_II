// Array of Pointers - 2D
#include <iostream>
using namespace std;
int main()
{

    int p, m, n;
    cout << "Enter the number of pages" << endl;
    cin >> p;
    cout << "Enter the rows of the array" << endl;
    cin >> m;
    cout << "Enter the columns of the array" << endl;
    cin >> n;
    int a[p][m][n];
    int(*ptr)[p][m][n];
    ptr = &a;

    cout << "Enter the elements in 3D  Array" << endl;
    for (int k = 0; k < p; k++)
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << "a[" << k << "][" << i << "][" << j << "] = ";
                cin >> (*ptr)[k][i][j];
            }
        }
    }

    cout << "The elements in the 2D Array are:";
    for (int k = 0; k < p; k++)
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << (*ptr)[k][i][j] << " ";
                
            }
        }
    }

    return 0;
}