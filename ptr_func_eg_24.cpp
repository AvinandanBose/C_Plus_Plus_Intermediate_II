// Addition of 2D array using pointer
#include <iostream>
void rules();
int input(int (*)[10][10], int, int);
void display(int, int, int (*)[10][10]);
int subTract(int (*)[10][10], int (*)[10][10], int (*)[10][10], int, int);
using namespace std;
int main()
{
    int mat1[10][10], mat2[10][10], result[10][10];
    int rowsize;
    int colsize;
    int i, j, k;
    rules();
    cout << "Enter row size" << endl;
    cin >> rowsize;
    cout << "Enter column size" << endl;
    cin >> colsize;

    if (rowsize == colsize)
    {

        cout << "Enter elements in 1st Matrix: " << endl;
        input(&mat1, rowsize, colsize);
        cout << "Enter elements in 2nd Matrix: " << endl;
        input(&mat2, rowsize, colsize);
        cout << "Displaying 1st Matrix:" << endl;
        display(rowsize, colsize, &mat1);
        cout << "Displaying 2nd Matrix:" << endl;
        display(rowsize, colsize, &mat2);

        subTract(&mat1, &mat2, &result, rowsize, colsize);
        cout << "Displaying Resultant Matrix:" << endl;
        display(rowsize, colsize, &result);
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

int input(int (*a)[10][10], int m, int n)
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

void display(int m, int n, int (*a)[10][10])
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

int subTract(int (*a)[10][10], int (*b)[10][10], int (*c)[10][10], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            *(*(*c + i) + j) = *(*(*b + i) + j) - *(*(*a + i) + j); //(*c)[i][j]= (*b)[i][j] + (*a)[i][j];
        }
    }
    return *(*(*c + m) + n); //(*c)[m][n]
}