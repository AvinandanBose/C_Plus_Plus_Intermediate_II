#include <iostream>
void rules();
int inputA(int[][1], int);
void displayA(int[][1], int);
int inputB(int[][10], int);
void displayB(int[][10], int);
void displayRes(int[][10], int, int);
int multiplication(int[][1], int[][10], int[][10], int, int, int, int);
using namespace std;
int main()
{
    rules();
    int a[10][1], b[1][10], c[10][10];
    int m, n;
    cout << "Enter row  for Row Vector: " << endl;
    cin >> m;
    cout << "Enter columns  for Matrix B: " << endl;
    cin >> n;

    cout << "Enter the elements of Column Vector: " << endl;
    inputA(a, m);

    cout << "Enter the elements of Row Vector: " << endl;
    inputB(b, n);

    cout << "Displaying the Matrix A(Column Vector): " << endl;

    displayA(a, m);

    cout << "Displaying the Matrix B(Row Vector): " << endl;

    displayB(b, n);

    multiplication(a, b, c, m, n, 0, 0);

    cout << "Displaying the Matrix C: " << endl;

    displayRes(c, m, n);

    return 0;
}

int inputA(int array[][1], int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> array[i][j];
        }
    }
    return array[rows][10];
}

int inputB(int array[][10], int col)
{
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> array[i][j];
        }
    }
    return array[1][col];
}
void displayA(int array[][1], int rows)
{
    for (int i = 0; i < rows; i++)
    {
        cout << "|";
        for (int j = 0; j < 1; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << "|";
        cout << endl;
    }
}
void displayB(int array[][10], int col)
{
    cout << "[";
    for (int i = 0; i < 1; i++)
    {

        for (int j = 0; j < col; j++)
        {
            cout << array[i][j] << " ";
        }
    }
    cout << "]";
    cout << endl;
}

void displayRes(int array[][10], int rows, int col)
{
    for (int i = 0; i < rows; i++)
    {
        cout << "|";
        for (int j = 0; j < col; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << "|";
        cout << endl;
    }
}
int multiplication(int a[][1], int b[][10], int c[][10], int m, int n, int i, int j)
{
    if (i == m)
    {
        return c[m][n];
    }
    if (i < m)
    {
        if (j < n)
        {
            c[i][j] = a[i][0] * b[0][j];
            multiplication(a, b, c, m, n, i, j + 1);
        }
        else
        {
            multiplication(a, b, c, m, n, i + 1, 0);
        }
    }
}

void rules()
{
    cout << "\tRule: Matrix A of (m x n ) must be multiplying with Matrix B of (n x m ) . " << endl;
    cout << "\tWhere m is the number of rows and n is the number of columns. " << endl;
    cout << "\tHence Condition is : n(no. of columns) of Matrix A = n(no. of rows) of Matrix B." << endl;
    cout << "\tTherefore,Column Vector can multiply with Row Vector i.e. (m x 1) x (1 x m) is always possible,"
         << "\n";
    cout << "\tAs column of Column Vector = rows of Rows Vector = 1 ." << endl;
    cout << "\tWhere as multiplication of Row Vector is only possible with Column Vector when," << endl;
    cout << "\tColumns of Row Vector(m) = rows(m) of Column Vector." << endl;
    cout << "\tAnd, Result = Singleton Matrix[where m= n = 1] when Row Vector[1xm] x Column Vector[mx1],"
         << "\n";
    cout << "\tAs row of Matrix A = column of Matrix B= 1 producing 1 x 1 matrix"
         << "\n";
    cout << "\tWhere as ,Column Vector(m x 1) x  Row Vector(1 x n) produces m x n matrix as result,"
         << "\n";
    cout << "\tWhere m= No. of Rows of Column Vector and n = No. of Columns in Row Vector "
         << "\n";
    cout << "*********************************************************" << endl;

    cout << "Column Vector x Row Vector [(m x 1) x (1 x n)] " << endl;
    cout << " m1 (Column of Row Vector) and m2(Row of Column Vector) Must Be  equal" << endl;
    cout << "\n";
}

/*************OUTPUT*************
 * lets say we have array:
 * 1st Matrix : a[3][1] =
 *
 * | 1 |
 * | 2 |
 * | 3 |
 *
 * 2nd Matrix : b[1][3] =
 * [4 5 6]
 *
 * Matrix Multiplication: Resultant Matrix : [3][3]=>
 *
 * | 1*4 1*5 1*6 |
 * | 2*4 2*5 2*6 |
 * | 3*4 3*5 3*6 |
 *
 * Hence in Recursion :
 *
 * Note: i=0, j=0
 * int multiplication(int a[][1], int b[][10], int c[][10], int m, int n, int i, int j):
 *
 *
 *                 if (i=0 < 3):
 *                    if (j=0 < 3):
 *                      c[i=0][j=0] = a[i=0][0] * b[0][j=0]; [1*4 =4]
 *                     multiplication(a, b, c, m, n, i, j=(0 + 1)=1);
 *
 *                if (i=0 < 3):
 *                   if (j=1 < 3):
 *                    c[i=0][j=1] = a[i=0][0] * b[0][j=1]; [1*5 = 5]
 *                   multiplication(a, b, c, m, n, i, j=(1 + 1)=2);
 *
 *              if (i=0 < 3):
 *                if (j=2 < 3):
 *                 c[i=0][j=2] = a[i=0][0] * b[0][j=2];  [1*6 = 6]
 *                   multiplication(a, b, c, m, n, i, j=(2 + 1)=3); => false
 *
 *                  else:
 *                       multiplication(a, b, c, m, n, i=(0 + 1)=1, j=0);
 *
 *             if (i=1 < 3):
 *                  if (j=0 < 3):
 *                      c[i=1][j=0] = a[i=1][0] * b[0][j=0]; [2*4 = 8]
 *                      multiplication(a, b, c, m, n, i, j=(0 + 1)=1);
 *
 *              if (i=1 < 3):
 *                  if (j=1 < 3):
 *                      c[i=1][j=1] = a[i=1][0] * b[0][j=1]; [2*5 = 10]
 *                          multiplication(a, b, c, m, n, i, j=(1 + 1)=2);
 *
 *          if (i=1 < 3):
 *              if (j=2 < 3):
 *                  c[i=1][j=2] = a[i=1][0] * b[0][j=2]; [2*6 = 12]
 *                      multiplication(a, b, c, m, n, i, j=(2 + 1)=3); => false
 *
 *              else:
 *
 *                  multiplication(a, b, c, m, n, i=(1 + 1)=2, j=0);
 *
 *          if (i=2 < 3):
 *              if (j=0 < 3):
 *                  c[i=2][j=0] = a[i=2][0] * b[0][j=0]; [3*4 = 12]
 *                      multiplication(a, b, c, m, n, i, j=(0 + 1)=1);
 *
 *
 *              if (i=2 < 3):
 *                  if (j=1 < 3):
 *                      c[i=2][j=1] = a[i=2][0] * b[0][j=1]; [3*5 = 15]
 *
 *              multiplication(a, b, c, m, n, i, j=(1 + 1)=2);
 *
 *                  if (i=2 < 3):
 *                      if (j=2 < 3):
 *                          c[i=2][j=2] = a[i=2][0] * b[0][j=2]; [3*6 = 18]
 *                          multiplication(a, b, c, m, n, i, j=(2 + 1)=3); => false
 *
 *                  else:
 *                  multiplication(a, b, c, m, n, i=(2 + 1)=3, j=0); => false
 *
 *
 *              if (i=3 == m=3):
 *                     return c[m][n]; => result
 *
 * Hence Output:
 * |4 5 6 |
 * |8 10 12 |
 * |12 15 18 |
 *
 * *******************************/
