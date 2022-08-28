// Program to find second smallest element in an array
#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter Row of Matrix A: " << endl;
    cin >> m;
    cout << "Enter Column of Matrix A: " << endl;
    cin >> n;
    int count =0;
    if (m == 3 && n == 3)
    {
        int mat[m][n];
        int temp[m][n];
        int min1 = 0;
        int min2 = 0;
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

        if (mat[0][0] < mat[0][1])
        {
            min1 = mat[0][0];
            min2 = mat[0][1];
        }
        else
        {
            min1 = mat[0][1];
            min2 = mat[0][0];
        }
        for (int i =0 ; i < n; i++)
        {
            for (int j =2 ; j < m; j++)
            {
                count = count +1;
                if(count == 1){
                    if (mat[i][j] < min1)
                    {
                        min2 = min1;
                        min1 = mat[i][j];
                    }
                    else if (mat[i][j] < min2 && mat[i][j] > min1)
                    {
                        min2 = mat[i][j];
                    }
                }
                else{
                    for (int k = 0; k < n; k++)
                    {
                        if (mat[i][k] < min1)
                        {
                            min2 = min1;
                            min1 = mat[i][k];
                        }
                        else if (mat[i][k] < min2 && mat[i][k] > min1)
                        {
                            min2 = mat[i][k];
                        }
                    }
                
                }     
                
            }
        }
        cout << "Second smallest element in the matrix is:" <<min2 << endl;
    }
    

    else
    {
        cout << "Invalid Input" << endl;
    }
    return 0;
}

/*****************************
 * 3 x 3 matrix
 * m = 3
 * n = 3
 * so we take two variable : min1 and min 2  and a count = 0
 * And we assign values to each accordingly to lesser and greater
 *
 * say : mat[0][0] = 12
 * mat[0][1] = 10
 * mat[0][1] < mat[0][0]
 * Therefore, min1 = mat[0][1]= 10 and min2 = mat[0][0]= 12
 * else,
 * say : mat[0][0] = 10
 * mat[0][1] = 12
 * mat[0][0] < mat[0][1]
 * Therefore, min1 = mat[0][0]= 10 and min2 = mat[0][1]= 12
 *
 * That is smaller value first , then greater value.
 *
 * Now we already have taken mat[0][0] and mat[0][1],
 * So second smallest element will be serached from : mat[0][2] to mat[2][2]
 * i.e. so 1st matrix we have [0][0] , [0][1] , [0][2] indexes
 * Hence [0][2] execute only once and we have count = 0
 * which will be incremented to 1 for 1st execution:
 * |12 10 5|
 * |1  2  67 |
 * |89 10 11|
 *
 * int i = 0 :
 *   int j = 2:
 *      count = 1:
 *          mat[0][2] = 5 < min1 = 10 [True]:
 *                  min2 = min1  = 10
 *                 min1 = mat[0][2] = 5
 *     count = 2: [false]:
 *         else:
 *            int i =1:
 *              int k = 0:
 *                 mat[1][0] = 1 < min1 = 5 [True]:
 *                        min2 = min1  = 5
 *                      min1 = mat[1][0] = 1
 *             int k = 1:
 *                mat[1][1] = 2 < min1 = 1 [False]:
 *                  else:
 *                    mat[1][1] = 2 < min2 =5 [True] && mat[1][1] = 2 > min1 = 1 [True]:
 *                         min2 = mat[1][1] = 2
 * 
 *              int k =2:
 *                mat[1][2] = 67 < min1 = 1 [False]:
 *                 else:
 *                   mat[1][2] = 67 < min2 =2 [False] && mat[1][2] = 67 > min1 = 2 [True]: = [False]
 * 
 * And it goes on.... And we get the second smallest integer in array
 * 
 * ************************************************/