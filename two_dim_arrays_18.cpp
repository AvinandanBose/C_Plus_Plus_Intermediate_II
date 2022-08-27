// Program to find second largest element in an array
#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter Row of Matrix A: " << endl;
    cin >> m;
    cout << "Enter Column of Matrix A: " << endl;
    cin >> n;
    if (m == 3 && n == 3)
    {
        int mat[m][n];
        int temp[m][n];
        int max = 0;
        int max1 = 0;
        int max2 = 0;
        cout << "Enter elements in the  Matrix: " << endl;
        cout << "\n";
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << "mat[" << i << "][" << j << "] = ";
                cin >> mat[i][j];
            }
        }
        cout << "\n";
        cout << " Representation of Matrix  :(m x n) :" << endl;
        cout << "\n";
        for (int i = 0; i < m; i++)
        {
            cout << "|";
            for (int j = 0; j < n; j++)
            {
                cout << mat[i][j] << " ";
            }
            cout << "|";
            cout << endl;
        }
        cout << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (mat[i][j] > max)
                {

                    max = mat[i][j];
                    max2 = max1;
                    max1 = max;
                }
            
            }
        }
        cout << "Second largest element in the matrix is: " << max2 << endl;
    }
    else
    {
        cout << "Invalid Input" << endl;
    }
    return 0;
}

/*****************************
|1 2 3 |
|4 5 6 |
|7 8 9 |
 *
 * max =0
 * max1 =0
 * max2 =0
 * int i = 0:
 *    int j = 0:
 *      max[0][0] = 1 > max == True
 *      max = max[0][0] = 1
 *      max2 = max1 = 0
 *      max1 = max = 1
 *
 *
 * int i = 0:
 *    int j = 1:
 *      max[0][1] = 2 > 1 == True
 *     max = max[0][1] = 2
 *      max2 = max1 = 1
 *     max1 = max = 2
 *
 * int i = 0:
 *   int j = 2:
 *     max[0][2] = 3 > 2 == True
 *      max = max[0][2] = 3
 *      max2 = max1 = 2
 *      max1 = max = 3
 *      
 *
 * int i = 1:
 *   int j = 0:
 *    max[1][0] = 4 > 3 == True
 *     max = max[1][0] = 4
 *     max2 = max1 = 3
 *     max1 = max = 4
 *      
 *
 * int i = 1:
 *      int j = 1:
 *           max[1][1] = 5 > 4 == True
 *              max = max[1][1] = 5
 *             max2 = max1 = 4
 *              max1 = max = 5
 *              
 *
 * int i = 1:
 *      int j = 2:
 *          max[1][2] = 6 > 5 == True
 *              max = max[1][2] = 6
 *             max2 = max1 = 5
 *              max1 = max = 6
 *              
 *
 * int i = 2:
 *      int j = 0:
 *          max[2][0] = 7 > 6 == True
 *          max = max[2][0] = 7
 *          max2 = max1 = 6
 *          max2 = max1 = 7
 *
 * int i = 2:
 *      int j = 1:
 *          max[2][1] = 8 > 7 == True
 *         max = max[2][1] = 8
 *          max2 = max1 = 7
 *          max1 = max = 8
 *      
 *
 * int i = 2:
 *     int j = 2:
 *        max[2][2] = 9 > 8 == True
 *       max = max[2][2] = 9
 *       max2 = max1 = 8
 *      max1 = max = 9
 *     
 *
 *
 *
 *
 *
 *
 *
 * *******************************/