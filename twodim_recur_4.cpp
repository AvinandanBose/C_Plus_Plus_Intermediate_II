#include <iostream>

int input(int[][10], int, int);
void display(int, int, int[][10]);
int getCofactor(int[][10], int[][10], int, int, int, int, int, int, int, int);
int determinant(int[][10], int, int);

using namespace std;
int main()
{
    cout << "This is upto 2x2 matrix" << endl;
    int a[10][10], temp[10][10];
    int m1, n1, i, j, k;
    cout << "Enter row  for Matrix : " << endl;
    cin >> m1;
    cout << "Enter columns  for Matrix : " << endl;
    cin >> n1;
    if(m1==n1){
        cout << "Enter elements in Matrix: " << endl;
        input(a, m1, n1);
        cout << "Displaying Matrix:" << endl;
        display(m1, n1, a);
        cout << "Determinant of Matrix is: " << determinant(a, m1, n1) << endl;
    }
    else{
        cout << "Determinant of Matrix is not possible" << endl;
    }
    
    return 0;
}

int input(int array[][10], int rows, int columns)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << "arr[" << i << "][" << j << "] = ";
            cin >> array[i][j];
        }
    }
    return array[rows][10];
}

void display(int rows, int columns, int array[][10])
{
    for (int i = 0; i < rows; i++)
    {
        cout << "|";
        for (int j = 0; j < columns; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << "|" << endl;
    }
}
int getCofactor(int array[][10], int temp[][10], int rows, int columns, int p, int q, int i, int j, int s, int t)
{

    if (i < rows)
    {
        if (j < columns)
        {
            if (i != p && j != q)
            {
                temp[s][t] = array[i][j];
                
                
            }
            getCofactor(array, temp, rows, columns, p, q, i, j + 1, s, t);
        }
        else
        {
            getCofactor(array, temp, rows, columns, p, q, i + 1, 0, s, t);
        }
    }
}

int determinant(int array[][10], int rows, int columns)
{

    int det = 0;
    int temp[10][10];
    int sign = 1;
    if (rows == 1 && columns == 1)
    {
        
        return array[0][0];
    }

    for (int cofac = 0; cofac < rows; cofac++)
    {
        
        getCofactor(array, temp, rows, columns, 0, cofac, 0, 0, 0, 0);
      
        
        det = det + (sign * array[0][cofac] * determinant(temp, rows - 1, columns - 1));

    
        sign = -sign;
    }

    return det;
}

/********************************************************************************
 * ===========================2x2 Matrix===============================================
 * Suppose our matrix is of size 2x2.
 * a[0][0] = 3
 * a[0][1] = 2
 * a[1][0] = -1
 * a[1][1] = 6
 *
 * first in Determinant :
 * int cofac = 0; cofac < 2; cofac++
 * when cofac =0
 *          getCofactor(array, temp, 2, 2, 0, 0, 0, 0, 0, 0);
 *
 * getcofactor(array, temp, 2, 2, 0(p), 0(q), 0(i), 0(j), 0(s), 0(t)):
 *              if (i=0 < 2):
 *                 if (j=0 < 2):
 *                    if (i != 0(p) && j != 0(q))[false as i=0 and j=0]:
 *
 *                   getCofactor(array, temp, 2, 2, 0(p), 0(q), 0(i), j=j+1=1, 0(s), 0(t));
 *
 * getcofactor(array, temp, 2, 2, 0(p), 0(q), 0(i), 1(j), 0(s), 0(t)):
 *             if (i < 2):
 *               if (j < 2):
 *                if (i != 0(p) && j != 0(q))[false as i=0 and j=1, both should be not equal to 0]:
 *               getCofactor(array, temp, 2, 2, 0(p), 0(q), 0(i), j=j+1=2, 0(s), 0(t));
 *
 *  As j=2: hence j<2 is false, so it will go to else part:
 * getCofactor(array, temp, 2, 2, 0(p), 0(q), i=i+1=1, 0(j), 0(s), 0(t));
 *       if (i=1 < 2):
 *         if (j=0 < 2):
 *          if (i != 0(p) && j != 0(q))[false as i=1 and j=0, both should be not equal to 0]:
 *         getCofactor(array, temp, 2, 2, 0(p), 0(q), 1(i), j=j+1=1, 0(s), 0(t));
 *
 * getcofactor(array, temp, 2, 2, 0(p), 0(q), 1(i), 1(j), 0(s), 0(t)):
 *            if (i < 2):
 *             if (j < 2):
 *             if (i != 0(p) && j != 0(q))[True]:
 *            temp[0][0] = array[1][1] = 6;
 *          
 *
 * getCofactor(array, temp, 2, 2, 0(p), 0(q), 1(i), j=j+1=2, 0(s), 0(t));
 *
 * As j=2: hence j<2 is false, so it will go to else part:
 * getCofactor(array, temp, 2, 2, 0(p), 0(q), i=i+1=2, 0(j), 0(s), 0(t));
 *
 * As i=2: hence i<2 is false.
 *
 * Therefore , temp[0][0] = 6;
 * Now, in determinant:
 *  determinant(temp, 1, 1) :
 *          if(row ==1 and column == 1):
 *                  return array[0][0] = 6;
 *
 * As row =1 and column =1, it will swap :
 * temp[0][0] = array[0][0] = 6;
 *
 * det = det + (sign * array[0][0] * determinant(temp, 2-1=1, 2-1=1));
 *     = 0 + (1 * 3 * determinant(temp, 1, 1));
 *      = 0 + (1 * 3 * 6);
 *       = 18;
 *
 * Now, cofac = 1; cofac < 2; cofac++
 * when cofac =1
 *         getCofactor(array, temp, 2, 2, 0, 1, 0, 0, 0, 0);
 * getcofactor(array, temp, 2, 2, 0(p), 1(q), 0(i), 0(j), 0(s), 0(t)):
 *            if (i=0 < 2):
 *              if (j=0 < 2):
 *               if (i != 0(p) && j != 1(q))[false as i=0 ]:
 *             getCofactor(array, temp, 2, 2, 0(p), 1(q), 0(i), j=j+1=1, 0(s), 0(t));
 *
 * getcofactor(array, temp, 2, 2, 0(p), 1(q), 0(i), 1(j), 0(s), 0(t)):
 *          if (i < 2):
 *              if (j < 2):
 *                  if (i != 0(p) && j != 1(q))[false as i=0 and j=1, i should not be equal to 0 and j should not be equal to 1]:
 *                  getCofactor(array, temp, 2, 2, 0(p), 1(q), 0(i), j=j+1=2, 0(s), 0(t));
 *
 *  As j=2: hence j<2 is false, so it will go to else part:
 *  getCofactor(array, temp, 2, 2, 0(p), 1(q), i=i+1=1, 0(j), 0(s), 0(t));
 *          if (i=1 < 2):
 *              if (j=0 < 2):
 *                  if (i=1 != 0(p) && j=0 != 1(q))[True]:
 *                          temp[0][0] = array[1][0] = -1;
 *                          
 *
 *
 * getcofactor(array, temp, 2, 2, 0(p), 1(q), 1(i), 1(j), 0(s), 0(t)):
 *         if (i < 2):
 *              if (j < 2):
 *              if (i != 0(p) && j != 1(q))[false as i=1 and j=1, i should not be equal to 0 and j should not be equal to 1]:
 *
 *
 * getCofactor(array, temp, 2, 2, 0(p), 1(q), 1(i), j=j+1=2, 0(s), 0(t));
 *
 * As j=2: hence j<2 is false, so it will go to else part:
 * getCofactor(array, temp, 2, 2, 0(p), 1(q), i=i+1=2, 0(j), 0(s), 0(t));
 *
 * As i=2: hence i<2 is false.
 *
 * Therefore, temp[0][0] = -1;
 *
 * Now, in determinant:
 *
 *
 * determinant(temp, 1, 1) :
 *          if(row ==1 and column == 1):
 *                  array[0][0] = -1;//Swapping
 *
 * As row =1 and column =1, it will swap :
 * temp[0][0] = array[0][0] = -1;
 *
 *
 *
 *det = det + (sign * array[0][1] * determinant(temp, 2-1=1, 2-1=1));
 *    = 18 + (-1 * 2 * determinant(temp, 1, 1));
 *      = 18 + (-1 * 2 * -1);
 *      = 18 + 2;
 *      = 20;
 *
 *
 * ********************************************************************************/