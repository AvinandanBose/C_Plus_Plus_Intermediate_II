// Multiplication of two 2D Matrices
#include <iostream>
using namespace std;
int main()
{
    int m, n1;
    int m1, n;
    cout << "Rule: Column of Matrix A and Row of Matrix B should be equal " << endl;
    cout << "Let: Row of Matrix A = m" << endl;
    cout << "Let: Column of Matrix B = n" << endl;
    cout << "Result: m x n" << endl;
    cout << "Enter Column of Matrix A: " << endl;
    cin >> n1;
    cout << "Enter Row of Matrix B : " << endl;
    cin >> m1;
    if (m1 == n1)
    {
        cout << "Enter Row of Matrix A: " << endl;
        cin >> m;
        cout << "Enter Column of Matrix B: " << endl;
        cin >> n;
        int mat1[m][n1];
        int mat2[m1][n];
        int result[m][n];

        cout << "Enter elements in the 1st Matrix: " << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n1; j++)
            {
                cout << "mat1[" << i << "][" << j << "] = ";
                cin >> mat1[i][j];
            }
        }
        cout << "\n";

        cout << "Enter elements in the 2nd Matrix: " << endl;
        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << "mat2[" << i << "][" << j << "] = ";
                cin >> mat2[i][j];
            }
        }
        cout << "\n";
        cout << " Representation of Matrix A :(m x n1) :" << endl;
        for (int i = 0; i < m; i++)
        {
            cout << "|";
            for (int j = 0; j < n1; j++)
            {
                cout << mat1[i][j] << " ";
            }
            cout << "|";
            cout << endl;
        }
        cout << " Representation of Matrix B :(m1 x n) :" << endl;
        for (int i = 0; i < m1; i++)
        {
            cout << "|";
            for (int j = 0; j < n; j++)
            {
                cout << mat2[i][j] << " ";
            }
            cout << "|";
            cout << endl;
        }

        // Initializing elements of resultant matrix  to 0.
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                result[i][j] = 0;
            }
        }

        cout << "Initialiazed to 0 = Resultant Matrix is now Null Matrix."
             << endl;
        for (int i = 0; i < m; ++i)
        {
            cout << "|";
            for (int j = 0; j < n; j++)
            {
                cout << result[i][j] << " ";
            }
            cout << "|";
            cout << endl;
        }

        cout << " Multiplication of Matrix A and Matrix B Initiating ...." << endl;
        for (int i = 0; i < m; i++)
        {

            for (int j = 0; j < n; j++)
            {
                for (int k = 0; k < n; k++)
                {
                    result[i][j] = result[i][j] + (mat1[i][k] *mat2[k][j]);
                    
                }
            }
        }

        cout << " Result of Multiplication of Matrix A and Matrix B is :" << endl;
        for (int i = 0; i < m; i++)
        {
            cout << "|";
            for (int j = 0; j < n; j++)
            {
                
               cout << result[i][j] << " ";
                    
                
            }
            cout << "|";
            cout << endl;
        }
        
    }
    else
    {
        cout << "Column of Matrix A not equal to Row of Matrix B" << endl;
        cout << "Hence Matrix Multiplication is not Possible!!!!" << endl;
    }

    return 0;
}

/*****************************
 * Workings:
 * As resultant matrix is now a null matrix,
 * Say matrixA [2][2] = 
 * mat1[0][0] = 1
 * mat1[0][1] = 2
 * mat1[1][0] = 1
 * mat1[1][1] = 2
 * in:
 *  |1 2 |  = |a11  b11|
 *  |1 2 |    |a22  b22|
 * 
 * Similarly ,
 * 
 * Say matrixB [2][2] = 
 * mat2[0][0] = 1
 * mat2[0][1] = 2
 * mat2[1][0] = 1
 * mat2[1][1] = 2
 * 
 * in:
 * 
 *  |1 2 |  = |a11  b11|
 *  |1 2 |    |a22  b22|
 * 
 *  So, Multiplication will be:
 * 
 *  elements of Rows of Matrix A  x elements of Columns of Matrix B  
 *  i.e., 
 *  |a11 of MatA x a11 of MatB + b11 of MatA * a22 of MatB   a11 of MatA x b11 of MatB + b11 of MatA * b22 of MatB|
 *  |a22 of MatA x a11 of MatB + b22 of MatA * a22 of MatB   a22 of MatA x b11 of MatB + b22 of MatA * b22 of MatB|
 *
 *  |mat1[0][0]*mat2[0][0]+mat1[0][1]*mat2[1][0]  mat1[0][0]*mat2[0][1]+mat1[0][1]*mat2[1][1]|
 *  |mat1[1][0]*mat2[0][0]+mat1[1][1]*mat2[1][0]  mat1[1][0]*mat2[0][1]+mat1[1][1]*mat2[1][1]|
 * 
 * Therefore , we need a Null Matrix to proceed with the addition:
 * result[m][n] =|0  0|
 *               |0  0|
 * 
 * If we go with the first Loop:
 *  int i = 0 ; i < 2(m)
 *    int j = 0  ;j < 2(n)
 *      int k = 0 ; k < 2(n)
 *          result[i=0][j=0] = result[0][0] + (mat1[i][k] *mat2[k][j]);
 *          i.e.             = 0            +  mat1 [0][0] * mat2[0][0]  
 *          i.e              = 0            +  1           *     1 
 *          i.e.             = 1
 * 
 *      int k =1
 *          result[i=0][j=0] = result[0][0] + (mat1[i][k] *mat2[k][j]);
 *          i.e.             = 1            +  mat1 [0][1] * mat2[1][0]  
 *          i.e              = 1            +     2       *     1 
 *          i.e.             = 3
 *  
 *      int j=1
 *          int k =0
 *              result[i=0][j=1] = result[0][1] + (mat1[i][k] *mat2[k][j]);
 *              i.e.             = 0            +  mat1 [0][0] * mat2[0][1]  
 *              i.e              = 0            +  1           *     2 
 *              i.e.             = 2
 * 
 *          int k =1
 *              result[i=0][j=1] = result[0][1] + (mat1[i][k] *mat2[k][j]);
 *              i.e.             = 2            +  mat1 [0][1] * mat2[1][1]  
 *              i.e              = 2            +     2       *     2
 *              i.e.             = 6
 *  int i = 1:
 *      int j = 0:
 *          int k =0:
 *              result[i=1][j=0] = result[1][0] + (mat1[i][k] *mat2[k][j]);
 *              i.e.             = 0            +  mat1 [1][0] * mat2[0][0]  
 *              i.e              = 0            +  1           *     1 
 *              i.e.             = 1
 *          
 *          int k =1
 *              result[i=1][j=0] = result[1][0] + (mat1[i][k] *mat2[k][j]);
 *              i.e.             = 1            +  mat1 [1][1] * mat2[1][0]  
 *              i.e              = 1            +     2       *     1 
 *              i.e              = 3
 * 
 *       int j = 1:
 *          int k =0:
 *              result[i=1][j=1] = result[1][1] + (mat1[i][k] *mat2[k][j]);
 *              i.e.             = 0            +  mat1 [1][0] * mat2[0][1]  
 *              i.e              = 0            +  1           *     2 
 *              i.e.             = 2
 *          
 *          int k =1
 *              result[i=1][j=0] = result[1][1] + (mat1[i][k] *mat2[k][j]);
 *              i.e.             = 2            +  mat1 [1][1] * mat2[1][1]  
 *              i.e              = 2            +     2       *     2 
 *              i.e              = 6
 *          
 *          
 *     
 * 
 * ************************************************/