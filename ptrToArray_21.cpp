#include <iostream>
int input(int *, int, int,int);
void display(int *, int, int, int);
using namespace std;
int main()
{
    int p, m, n;
    cout << "Enter number of pages: " << endl;
    cin >> p;
    cout << "Enter number of rows: " << endl;
    cin >> m;
    cout << "Enter number of columns: " << endl;
    cin >> n;
    int a[p][m][n];
    cout << "Enter array elements: " << endl;
    input((int *)a, p, m, n);
    cout << "Array elements are: " << endl;
    display((int *)a, p, m, n);
    return 0;
}
int input(int *p, int pg, int row, int col)
{
    for (int i = 0; i < pg; i++)
    {
        for (int j = 0; j < row; j++)
        {
            for (int k = 0; k < col; k++)
            {
                cout << " a[" << i << "][" << j << "][" << k << "]: ";
                cin >> *(p + i * row * col + j * col + k);
            }
        }
    }
    return p[pg*row*col];
}
void display(int *p, int pg, int row, int col)
{
    for (int i = 0; i < pg; i++)
    {
        for (int j = 0; j < row; j++)
        {
            for (int k = 0; k < col; k++)
            {
                cout << *(p + i * row * col + j * col + k) << " ";
            }
        }
    }
}