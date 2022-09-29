#include <iostream>
int input(int[][10][10], int, int, int );
void display(int[][10][10], int, int, int);
using namespace std;
int main()
{
    int p, m, n, a[10][10][10];
    cout << "Enter number of pages: " << endl;
    cin >> p;
    cout << "Enter number of rows: " << endl;
    cin >> m;
    cout << "Enter number of columns: " << endl;
    cin >> n;
    cout << "Enter array elements: " << endl;
    input(a, p, m, n);
    cout << "Array elements are: " << endl;
    display(a, p, m, n);
    return 0;
}
int input(int a[][10][10], int p, int m, int n)
{
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < n; k++)
            {
                cout << " a[" << i << "][" << j << "][" << k << "]: ";
                cin >> *(*(*(a+i)+ j)+ k);
            }
        }
    }
    return *(*(*(a+p)+m)+n);
}
void display(int a[][10][10], int p, int m, int n)
{
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < n; k++)
            {
                cout << *(*(*(a + i) + j) + k) << " ";
            }
        }
    }
}
