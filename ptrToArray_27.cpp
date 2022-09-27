#include <iostream>
using namespace std;
int main()
{
    int p, m, n;
    cout << "Enter number of pages: ";
    cin >> p;
    cout << "Enter number of rows: ";
    cin >> m;
    cout << "Enter number of columns: ";
    cin >> n;
    int a[p][m][n];
    int *ptr , **q;
    ptr = (int *)a;
    q = &ptr;

    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < n; k++)
            {
                cout << " a[" << i << "][" << j << "][" << k << "]: ";
                cin >> *(*q + i * m * n + j * n + k);
            }
        }
    }
    cout << "Array elements are: ";
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < n; k++)
            {
                cout << *(*q + i * m * n + j * n + k) << " ";
            }
        }
    }
    return 0;
}