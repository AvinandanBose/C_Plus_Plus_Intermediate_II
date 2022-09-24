#include <iostream>
int input(int *, int , int );
void display(int *, int, int);
using namespace std;
int main()
{
   int m , n;
    cout << "Enter number of rows: ";
    cin >> m;
    cout << "Enter number of columns: ";
    cin >> n;
    int a[m][n];
    cout << "Enter array elements: " << endl;
    input((int *)a, m, n);
    cout << "Array elements are: " << endl;
    display((int *)a, m, n);   
    return 0;
}
int input(int *p, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << " a[" << i << "][" << j << "]: ";
            cin >> *(p + i * n + j);
        }
    }
}
void display(int *p, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << *(p + i * n + j) << " ";
        }
    }
}