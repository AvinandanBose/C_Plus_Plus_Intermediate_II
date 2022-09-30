#include <iostream>
void rules();
int inputA(int*, int);
void displayA(int*, int);
int inputB(int*, int);
void displayB(int*, int);
void displayRes(int*, int, int);
int multiplication(int*, int*, int*, int, int);
using namespace std;
int main()
{
    rules();
    int m, n;
    cout << "Enter row  for Row Vector: " << endl;
    cin >> m;
    cout << "Enter columns  for Matrix B: " << endl;
    cin >> n;
    int a[m][1], b[1][n], c[m][n];

    cout << "Enter the elements of Column Vector: " << endl;
    inputA((int *)a, m);

    cout << "Enter the elements of Row Vector: " << endl;
    inputB((int *)b, n);

    cout << "Displaying the Matrix A(Column Vector): " << endl;

    displayA((int *)a, m);

    cout << "Displaying the Matrix B(Row Vector): " << endl;

    displayB((int *)b, n);

    multiplication((int *)a, (int *)b, (int *)c, m, n);

    cout << "Displaying the Matrix C: " << endl;

    displayRes((int *)c, m, n);

    return 0;
}

int inputA(int *p, int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> *(p + i * 1 + j);
        }
    }
    cout << endl;
    return p[rows * 1];
}

void displayA(int *p, int rows)
{
    for (int i = 0; i < rows; i++)
    {
        cout << "|";
        for (int j = 0; j < 1; j++)
        {
            cout << *(p + i * 1 + j) << " ";
        }
        cout << "|";
        cout << endl;
    }
  
}

int inputB(int *p, int cols)
{
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "b[" << i << "][" << j << "] = ";
            cin >> *(p + i * cols + j);
        }
    }
    cout << endl;
    return p[1 * cols];
}

void displayB(int *p, int cols)
{
    cout << "[";
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << *(p + i * cols + j) << " ";
        }
        
    }
    cout << "]";
    cout << endl;
}

void displayRes(int *p, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        cout << "|";
        for (int j = 0; j < cols; j++)
        {
            cout << *(p + i * cols + j) << " ";
        }
        cout << "|";
        cout << endl;
    }
    
}

int multiplication(int *p, int *q, int *r, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            *(r + i * cols + j) = *(p + i * 1 + 0) * *(q + 0 * cols + j);
        }
    }
    return r[rows * cols];
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
