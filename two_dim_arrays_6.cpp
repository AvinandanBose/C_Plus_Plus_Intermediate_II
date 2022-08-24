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

    cout << "Column Vector x Row Vector [(m x 1) x (1 x n)] " << endl;
    cout << " m1 (Column of Row Vector) and m2(Row of Column Vector) Must Be  equal" << endl;
    cout << "\n";
    int m;
    int n;
    cout << "Enter row of Row Vector: " << endl;
    cin >> m;
    cout << "Enter column of Column Vector: " << endl;
    cin >> n;
    
    int mat1[m][1];
    int mat2[1][n];
    int result[m][n];
        
    cout << "Enter elements in the 1st Matrix: " << endl;
    for (int i = 0; i < m; i++)
        {
            for (int j = 0; j <=0; j++)
            {
                cout << "arr[" << i << "][" << j << "] = ";
                cin >> mat1[i][j];
            }
        }
        cout << "\n";
        cout << "Enter elements in 2nd Matrix: " << endl;
         for (int i = 0; i <=0; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << "arr[" << i << "][" << j << "] = ";
                cin >> mat2[i][j];
            }
        }
        cout << "\n";
        
        // Column Vector Representation of Matrix A
        cout << "Column  Vector Representation of Matrix A :(m x 1) Column Matrix" << endl;
        for (int i = 0; i < m; i++)
        {
             cout << "|";
            for (int j = 0; j <= 0; j++)
            {
                cout << mat1[i][j]<<" ";
            }
            cout << "|";
            cout <<  endl;
        }
        // Row Vector Representation of Matrix B
        cout << "Row Vector Representation of Matrix B :(1 x n) Column Matrix" << endl;
        cout << "[";
         for (int i = 0; i <=0; i++)
        {
            for (int j = 0; j < n; j++)
            {
                
                cout << mat2[i][j]<<" ";
            }
        }
        cout << "]";
        cout << endl;
        cout << "Result of Multiplication of Column Vector:(m x 1) and Row Vector(1 x n) :" << endl;
        for (int i = 0; i < m; i++)
        {
             cout << "|";
            for (int j = 0; j < n; j++)
            {
                result[i][j] = mat1[i][0] * mat2[0][j];
            
                cout << result[i][j]<<" ";
                
            }
            cout << "|";
            cout <<  endl;
        }


        
    
    

    return 0;
}