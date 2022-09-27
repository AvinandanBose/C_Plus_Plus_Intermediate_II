#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter number of rows: ";
    cin >> m;
    cout << "Enter number of columns: ";
    cin >> n;
    int a[m][n];
    int *p , **q;
    p = (int *)a;
    q = &p;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << " a[" << i << "][" << j << "]: ";
            cin >> *(*q + i * n + j);
        }
    }
    cout << "Array elements are: ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << *(*q + i * n + j) << " ";
        }
    }
    return 0;
}