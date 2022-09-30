#include <iostream>

int input(int*, int, int);
void display(int, int, int*);
int initializeToZero(int*, int, int);
int multiply(int, int, int*, int, int*, int*);
using namespace std;
int main()
{
    
    int m1, n1, m2, n2, i, j, k;
    cout << "Enter row  for Matrix A: " << endl;
    cin >> m1;
    cout << "Enter columns  for Matrix A: " << endl;
    cin >> n1;
    cout << "Enter row  for Matrix B: " << endl;
    cin >> m2;
    cout << "Enter columns  for Matrix B: " << endl;
    cin >> n2;
    int a[m1][n1], b[m2][n2], c[m1][n2];
    if (n1 == m2)
    {

        cout << "Enter the elements of Matrix A: " << endl;
        input((int *)a, m1, n1);
        cout << "Enter the elements of Matrix B: " << endl;
        input((int *)b, m2, n2);
        cout << "Displaying the Matrix A: " << endl;
        display(m1, n1, (int *)a);
        cout << "Displaying the Matrix B: " << endl;
        display(m2, n2, (int *)b);
        initializeToZero((int *)c, m1, n2);
        multiply(m1, n1, (int *)a, m2, (int *)b, (int *)c);
        cout << "Displaying the Matrix C: " << endl;
        display(m1, n2, (int *)c);
        return 0;
    }
    else
    {
        cout << "Matrix multiplication is not possible" << endl;
    }
    return 0;
}

int input(int *p, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "a[" << i << "][" << j << "]: ";
            cin >> *(p + i * n + j);
        }
    }
    cout << endl;
    return p[m * n];
}

void display(int m, int n, int *p)
{
    for (int i = 0; i < m; i++)
    {
        cout << "|";
        for (int j = 0; j < n; j++)
        {
            cout << *(p + i * n + j) << " ";
        }
        cout << "|";
        cout << endl;
    }
}

int initializeToZero(int *p, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            *(p + i * n + j) = 0;
        }
    }
    return p[m * n];
}

int multiply(int m1, int n1, int *a, int n2, int *b, int *c)
{
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            for (int k = 0; k < n1; k++)
            {
                *(c + i * n2 + j) = *(c + i * n2 + j) +  * (a + i * n1 + k) * *(b + k * n2 + j);
            }
        }
    }
    return c[m1 * n2];
}