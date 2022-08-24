// Sunstraction of 2D array
#include <iostream>
using namespace std;
int main()
{

    int rowsize;
    int colsize;
    cout<<"Rule: rows and columns must be equal to perform subtraction of two matrices. " << endl;
    cout<<"Hence column size and row size must be equal " << endl;
    cout <<"  (m x n) +( m x n) format where, m=m and n=n" <<"\n";
    cout <<"And  m = number of rows and n = number of columns" <<"\n\n";

    cout << "Enter row size" << endl;
    cin >> rowsize;
    cout << "Enter column size" << endl;
    cin >> colsize;

    if (rowsize == colsize)
    {
        int mat1[rowsize][colsize];
        int mat2[rowsize][colsize];
        int result[rowsize][colsize];
        cout << "Enter elements in 1st Matrix: " << endl;
        for (int i = 0; i < rowsize; i++)
        {
            for (int j = 0; j < colsize; j++)
            {
                cout << "arr[" << i << "][" << j << "] = ";
                cin >> mat1[i][j];
            }
        }
        cout << "Enter elements in 2nd Matrix: " << endl;
         for (int i = 0; i < rowsize; i++)
        {
            for (int j = 0; j < colsize; j++)
            {
                cout << "arr[" << i << "][" << j << "] = ";
                cin >> mat2[i][j];
            }
        }
        cout <<"Displaying 1st Matrix:" << endl;
        for (int i = 0; i < rowsize; i++)
        {
             cout << "|";
            for (int j = 0; j < colsize; j++)
            {
            
                cout << mat1[i][j]<<" ";
                
            }
            cout << "|";
            cout <<  endl;
        }
        cout <<"Displaying 2nd Matrix:" << endl;
        for (int i = 0; i < rowsize; i++)
        {
             cout << "|";
            for (int j = 0; j < colsize; j++)
            {
            
                cout << mat2[i][j]<<" ";
                
            }
            cout << "|";
            cout <<  endl;
        }
        cout <<"Substraction of 1st and 2nd Matrix:" << endl;
        for (int i = 0; i < rowsize; i++)
        {
             cout << "|";
            for (int j = 0; j < colsize; j++)
            {
                result[i][j] = mat1[i][j] - mat2[i][j];
            
                cout << result[i][j]<<" ";
                
            }
            cout << "|";
            cout <<  endl;
        }


    }
    else{
        cout << "Row size and column size must be equal , else substraction is not possible" << endl;
    }

    return 0;
}