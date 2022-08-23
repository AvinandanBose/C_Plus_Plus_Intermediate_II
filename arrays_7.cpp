// Multiplication of two 1D Matrices
#include <iostream>
using namespace std;
int main()
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

    cout << "Row Vector x Column Vector [(1 x m) x (m x 1)] " << endl;
    cout << " m1 (Column of Row Vector) and m2(Row of Column Vector) Must Be  equal" << endl;
    cout << "\n";
    int m1;
    int m2;
    cout << "Enter column of Row Vector: " << endl;
    cin >> m1;
    cout << "Enter row of Column Vector: " << endl;
    cin >> m2;
    if (m1 == m2)
    {
        int mat1[m1];
        int mat2[m2];
        int sum = 0;
        cout << "Enter elements in the 1st Matrix: " << endl;
        for (int i = 0; i < m1; i++)
        {
            cout << "Enter " << i << " th elements of mat1[" << i << "]: ";
            cin >> mat1[i];
        }
        cout << "\n";
        cout << "Enter elements in the 2nd Matrix: " << endl;
        for (int i = 0; i < m2; i++)
        {
            cout << "Enter " << i << " th elements of mat2[" << i << "]: ";
            cin >> mat2[i];
        }
        cout << "\n";
        // Row Vector Representation of Matrix A
        cout << "Row Vector Representation of Matrix A :(1 x m) Row Matrix" << endl;
        cout << "[";
        for (int i = 0; i < m1; i++)
        {
            cout << mat1[i] << " ";
        }
        cout << "]";
        cout << "\n";
        // Column Vector Representation of Matrix B
        cout << "Column  Vector Representation of Matrix B :(m x 1) Column Matrix" << endl;
        for (int i = 0; i < m2; i++)
        {
            cout << "|  ";
            cout << mat2[i];
            cout << "  |";
            cout << "\n";
        }

        for (int i = 0; i < m1; i++)
        {

            sum = sum + (mat1[i] * mat2[i]);
        }
        cout << "Result of Multiplication of Matrix in:(1 x 1) Singleton Matrix: [" << sum << "]" << endl;
    }
    else{
        cout << "Column of Row Vector not equal to Row of Column Vector" << endl;
        cout << "Hence Matrix Multiplication is not Possible!!!!" << endl;
    }

    return 0;
}