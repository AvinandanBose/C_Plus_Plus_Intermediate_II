// Addition of 2D array using pointer
#include <iostream>
void rules();
int input(int *, int, int);
void display(int, int, int *);
int add(int *, int*, int*, int, int);
using namespace std;
int main()
{

    
    int rowsize;
    int colsize;
    int i, j, k;
    rules();
    cout << "Enter row size" << endl;
    cin >> rowsize;
    cout << "Enter column size" << endl;
    cin >> colsize;
    int mat1[rowsize][colsize], mat2[rowsize][colsize], result[rowsize][colsize];

    if (rowsize == colsize)
    {

        cout << "Enter elements in 1st Matrix: " << endl;
        input((int *)mat1, rowsize, colsize);
        cout << "Enter elements in 2nd Matrix: " << endl;
        input((int *)mat2, rowsize, colsize);                   
        cout << "Displaying 1st Matrix:" << endl;
        display(rowsize, colsize, (int *)mat1);
        cout << "Displaying 2nd Matrix:" << endl;
        display(rowsize, colsize, (int *)mat2);

        add((int *)mat1, (int *)mat2, (int *)result, rowsize, colsize);
        cout << "Displaying Resultant Matrix:" << endl;
        display(rowsize, colsize, (int *)result);
        
    }
    else
    {
        cout << "Row size and column size must be equal , else addition is not possible" << endl;
    }

    return 0;
}
void rules()
{
    cout << "Rule: rows and columns must be equal to perform addition of two matrices. " << endl;
    cout << "Hence column size and row size must be equal " << endl;
    cout << "  (m x n) +( m x n) format where, m=m and n=n"
         << "\n";
    cout << "And  m = number of rows and n = number of columns"
         << "\n\n";
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

int add(int *p, int *q, int *r, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            *(r + i * n + j) = *(p + i * n + j) + *(q + i * n + j);
        }
    }
    return r[m * n];
}

