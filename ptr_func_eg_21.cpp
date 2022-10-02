#include <iostream>
int input(int(*)[10][10], int, int);
void display(int, int, int (*)[10][10]);
int initializeToZero(int (*)[10][10], int, int);
int multiply(int, int, int (*)[10][10], int, int (*)[10][10], int (*)[10][10]);
using namespace std;
int main()
{
    int a[10][10], b[10][10], c[10][10];
    int m1, n1, m2, n2, i, j, k;
    cout << "Enter row  for Matrix A: " << endl;
    cin >> m1;
    cout << "Enter columns  for Matrix A: " << endl;
    cin >> n1;
    cout << "Enter row  for Matrix B: " << endl;
    cin >> m2;
    cout << "Enter columns  for Matrix B: " << endl;
    cin >> n2;

    if (n1 == m2)
    {

        cout << "Enter the elements of Matrix A: " << endl;
        input(&a, m1, n1);
        cout << "Enter the elements of Matrix B: " << endl;
        input(&b, m2, n2);
        cout << "Displaying the Matrix A: " << endl;
        display(m1, n1, &a);
        cout << "Displaying the Matrix B: " << endl;
        display(m2, n2, &b);
        initializeToZero(&c, m1, n2);
        multiply(m1, n1, &a, n2, &b, &c);
        cout << "Displaying the Matrix C: " << endl;
        display(m1, n2, &c);
        return 0;
    }
    else
    {
        cout << "Matrix multiplication is not possible" << endl;
    }
    return 0;
}

int input(int(*a)[10][10], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "a[" << i << "][" << j << "]: ";
            cin >> *(*(*a + i) + j); //(*a)[i][j]
        }
    }
    cout << endl;
    return *(*(*a + m) + n); //(*a)[m][n]
}

void display(int m, int n, int(*a)[10][10])
{
    for (int i = 0; i < m; i++)
    {
        cout << "|";
        for (int j = 0; j < n; j++)
        {
            cout << *(*(*a + i) + j) << " "; //(*a)[i][j]
        }
        cout << "|";
        cout << endl;
    }
}

int initializeToZero(int(*a)[10][10], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            *(*(*a + i) + j) = 0; //(*a)[i][j] = 0;
        }
    }
    return *(*(*a + m) + n); //(*a)[m][n]
}

int multiply(int m1, int n1, int(*a)[10][10], int n2, int(*b)[10][10], int(*c)[10][10])
{
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            for (int k = 0; k < n1; k++)
            {
                *(*(*c + i) + j) = *(*(*c + i) + j) + *(*(*a + i) + k) * *(*(*b + k) + j);
                //(*c)[i][j] = (*c)[i][j] + (*a)[i][k] * (*b)[k][j];
            }
        }
    }
    return *(*(*c + m1) + n2); //(*c)[m1][n2]
}
