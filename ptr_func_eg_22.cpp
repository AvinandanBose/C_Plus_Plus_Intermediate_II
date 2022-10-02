#include <iostream>
void rules();
int inputA(int (*)[10][1], int);
void displayA(int (*)[10][1], int);
int inputB(int (*)[1][10], int);
void displayB(int (*)[1][10], int);
void displayRes(int (*)[10][10], int, int);
int multiplication(int (*)[10][1], int (*)[1][10], int (*)[10][10], int, int);
using namespace std;
int main()
{
    rules();
    int m, n;
    int a[10][1], b[1][10], c[10][10];
    cout << "Enter row  for Row Vector: " << endl;
    cin >> m;
    cout << "Enter columns  for Matrix B: " << endl;
    cin >> n;
    cout << "Enter the elements of Column Vector: " << endl;
    inputA(&a, m);

    cout << "Enter the elements of Row Vector: " << endl;
    inputB(&b, n);

    cout << "Displaying the Matrix A(Column Vector): " << endl;

    displayA(&a, m);

    cout << "Displaying the Matrix B(Row Vector): " << endl;

    displayB(&b, n);

    multiplication(&a, &b, &c, m, n);

    cout << "Displaying the Matrix C: " << endl;

    displayRes(&c, m, n);

    return 0;
}


int inputA(int(*a)[10][1], int m)
{
    for (int i = 0; i < m; i++)
    {
        cout << "a[" << i << "][0]: ";
        cin >> *(*(*a + i) + 0); //(*a)[i][j]
    }
    cout << endl;
    return *(*(*a + m) + 0); //(*a)[m][n]
}



void displayA(int (*a)[10][1], int m)
{
    for (int i = 0; i < m; i++)
    {
        cout << "|";
        for (int j = 0; j < 1; j++)
        {
            cout << *(*(*a + i) + j) << " "; //(*a)[i][j]
        }
        cout << "|";
        cout << endl;
    }
}

int inputB(int(*b)[1][10], int n)
{
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "b[" << i << "][" << j << "]: ";
            cin >> *(*(*b + i) + j); //(*b)[i][j]
        }
    }
    cout << endl;
    return *(*(*b + 1) + n); //(*b)[1][n]
}

void displayB(int (*b)[1][10], int n)
{
    cout << "[";
    for (int i = 0; i < 1; i++)
    { 
        for (int j = 0; j < n; j++)
        {
            cout << *(*(*b + i) + j) << " "; //(*b)[i][j]
        }      
    }
    cout << "]";
    cout << endl;
}

int multiplication(int (*a)[10][1], int (*b)[1][10], int (*c)[10][10], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            *(*(*c + i) + j) = *(*(*a + i) + 0) * *(*(*b + 0) + j); //(*c)[i][j] = (*a)[i][0] * (*b)[0][j]
        }
    }
    return *(*(*c + m) + n); //(*c)[m][n]
}

void displayRes(int (*c)[10][10], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        cout << "|";
        for (int j = 0; j < n; j++)
        {
            cout << *(*(*c + i) + j) << " "; //(*c)[i][j]
        }
        cout << "|";
        cout << endl;
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