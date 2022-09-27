#include <iostream>
int input(int **, int, int);
void display(int **, int, int);
using namespace std;
int main()
{
    int m, n;
    cout << "Enter number of rows: ";
    cin >> m;
    cout << "Enter number of columns: ";
    cin >> n;
    int a[m][n];
    int *p = (int *)a;
    cout << "Enter array elements: " << endl;
    input(&p, m, n);
    cout << "Array elements are: " << endl;
    display(&p, m, n);
    return 0;
}
int input(int **q, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << " a[" << i << "][" << j << "]: ";
            cin >> *(*q + i * n + j);
        }
    }
    return *q[m * n];
}
void display(int **q, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << *(*q+ i * n + j) << " ";
        }
    }
}