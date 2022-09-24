#include <iostream>
int input(int[][10], int, int);
void display(int[][10], int, int);
using namespace std;
int main()
{
    int m,n,a[10][10];
    cout << "Enter number of rows: " << endl;
    cin >> m;
    cout << "Enter number of columns: " << endl;
    cin >> n;
    cout << "Enter array elements: " << endl;
    input(a, m, n);
    cout << "Array elements are: " << endl;
    display(a, m, n);
    return 0;
}
int input(int a[][10], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << " a[" << i << "][" << j << "]: ";
            cin >> *(*(a+i)+ j);
        }
    }
}
void display(int a[][10], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << *(*(a + i) + j) << " ";
        }
    }
}
