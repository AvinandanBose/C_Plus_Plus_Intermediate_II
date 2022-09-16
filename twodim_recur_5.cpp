#include <iostream>

int input(int[][10], int, int);
void display(int, int, int[][10]);
int getCofactor(int[][10], int[][10], int, int, int, int, int, int, int, int);
int determinant(int[][10], int, int);

using namespace std;
int main()
{
    cout << "This is for any higher order matrix" << endl;
    int a[10][10], temp[10][10];
    int m1, n1, i, j, k;
    cout << "Enter row  for Matrix : " << endl;
    cin >> m1;
    cout << "Enter columns  for Matrix : " << endl;
    cin >> n1;
    if (m1 == n1)
    {
        cout << "Enter elements in Matrix: " << endl;
        input(a, m1, n1);
        cout << "Displaying Matrix:" << endl;
        display(m1, n1, a);
        cout << "Determinant of Matrix is: " << determinant(a, m1, n1) << endl;
    }
    else
    {
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
                t++;
                if (t == columns - 1)
                {
                    t = 0;
                    s++;
                }
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

        cout << determinant(temp, rows - 1, columns - 1) << endl;
        cout << endl;
        det = det + (sign * array[0][cofac] * determinant(temp, rows - 1, columns - 1));

        sign = -sign;
    }

    return det;
}

/********************************************************************************
 * ===========================3x3 Matrix===============================================
 * Suppose our matrix is of size 3x3.
 * arr[0][0] = 1
 * arr[0][1] = 0
 * arr[0][2] = 2
 * arr[1][0] = -1
 * arr[1][1] = 3
 * arr[1][2] = 0
 * arr[2][0] = 0
 * arr[2][1] = 5
 * arr[2][2] = 1
 *
 * first in Determinant :
 * int cofac = 0; cofac < 3; cofac++
 * when cofac =0
 *          getCofactor(array, temp, 3, 3, 0, 0, 0, 0, 0, 0);
 *
 * getcofactor(array, temp, 3, 3, 0(p), 0(q), 0(i), 0(j), 0(s), 0(t)):
 *              if (i=0 < 2):
 *                 if (j=0 < 2):
 *                    if (i != 0(p) && j != 0(q))[false as i=0 and j=0]:
 *
 *                   getCofactor(array, temp, 3, 3, 0(p), 0(q), 0(i), j=j+1=1, 0(s), 0(t));
 *
 * getcofactor(array, temp, 3, 3, 0(p), 0(q), 0(i), 1(j), 0(s), 0(t)):
 *             if (i < 3):
 *               if (j < 3):
 *                if (i != 0(p) && j != 0(q))[false as i=0 and j=1, both should be not equal to 0]:
 *                  getCofactor(array, temp, 3, 3, 0(p), 0(q), 0(i), j=j+1=2, 0(s), 0(t));
 *
 * getcofactor(array, temp, 3, 3, 0(p), 0(q), 0(i), 2(j), 0(s), 0(t)):
 *            if (i < 3):
 *              if (j < 3):
 *                  if (i != 0(p) && j != 0(q))[false as i=0 and j=2, both should be not equal to 0]
 *                 getCofactor(array, temp, 3, 3, 0(p), 0(q), 0(i), j=j+1=3, 0(s), 0(t));
 *
 *
 *  As j=3: hence j<3 is false, so it will go to else part:
 * getCofactor(array, temp, 3, 3, 0(p), 0(q), i=i+1=1, 0(j), 0(s), 0(t));
 *
 * getcofactor(array, temp, 3, 3, 0(p), 0(q), 1(i), 0(j), 0(s), 0(t)):
 *
 *           if (i < 3):
 *            if (j < 3):
 *             if (i != 0(p) && j != 0(q))[false as i=1 and j=0, both should be not equal to 0]
 *         getCofactor(array, temp, 3, 3, 0(p), 0(q), 1(i), j=j+1=1, 0(s), 0(t));
 *
 * getcofactor(array, temp, 3, 3, 0(p), 0(q), 1(i), 1(j), 0(s), 0(t)):
 *
 *         if (i < 3):
 *          if (j < 3):
 *              if (i != 0(p) && j != 0(q))[true as i=1 and j=1, both should be not equal to 0]
 *              temp[0][0] = array[1][1] =3;
 *                  t++ = 0+1 =1;
 *                      if (t == 3-1)[false as t=1 and 3-1=2]
 *
 * getCofactor(array, temp, 3, 3, 0(p), 0(q), 1(i), j=j+1=2, 0(s), t=1);
 *
 * getcofactor(array, temp, 3, 3, 0(p), 0(q), 1(i), 2(j), 0(s), 1(t)):
 *
 *        if (i < 3):
 *              if (j < 3):
 *                 if (i != 0(p) && j != 0(q))[true]:
 *                      temp[0][1] = array[1][2] =0;
 *                          t++ = 1+1 =2;
 *
 *                      if (t == 3-1)[true as t=2 and 3-1=2]
 *                      t = 0;
 *                     s++ = s+1 = 0+1 = 1;
 *
 * getCofactor(array, temp, 3, 3, 0(p), 0(q), 1(i), j=j+1=3, 1(s), t=0);
 *
 * j =3 , hence false, so it will go to else part:
 * getCofactor(array, temp, 3, 3, 0(p), 0(q), i=i+1=2, 0(j), 1(s), t=0);
 *
 * getcofactor(array, temp, 3, 3, 0(p), 0(q), 2(i), 0(j), 1(s), 0(t)):
 *
 *       if (i < 3):
 *          if (j < 3):
 *              if (i != 0(p) && j != 0(q))[false as i=2 and j=0, both should be not equal to 0]
 *              getCofactor(array, temp, 3, 3, 0(p), 0(q), 2(i), j=j+1=1, 1(s), 0(t));
 *
 *
 * getcofactor(array, temp, 3, 3, 0(p), 0(q), 2(i), 1(j), 1(s), 0(t)):
 *
 *      if (i < 3):
 *          if (j < 3):
 *              if (i != 0(p) && j != 0(q))[true as i=2 and j=1, both should be not equal to 0]
 *              temp[1][0] = array[2][1] =5;
 *
 *              t++ = 0+1 =1;
 *
 *              if (t == 3-1)[false as t=1 and 3-1=2]
 *
 *              getCofactor(array, temp, 3, 3, 0(p), 0(q), 2(i), j=j+1=2, 1(s), t=1);
 *
 * getcofactor(array, temp, 3, 3, 0(p), 0(q), 2(i), 2(j), 1(s), 1(t)):
 *
 *     if (i < 3):
 *         if (j < 3):
 *            if (i != 0(p) && j != 0(q))[true as i=2 and j=2, both should be not equal to 0]
 *              temp[1][1] = array[2][2] =1;
 *              t++ = 1+1 =2;
 *              if (t == 3-1)[true as t=2 and 3-1=2]
 *                  t = 0;
 *                  s++ = s+1 = 1+1 = 2;
 *
 * getCofactor(array, temp, 3, 3, 0(p), 0(q), 2(i), j=j+1=3, 2(s), t=0);
 *
 * j =3 , hence false, so it will go to else part:
 * getCofactor(array, temp, 3, 3, 0(p), 0(q), i=i+1=3, 0(j), 2(s), t=0);
 *
 * i =3 , end of recursion.
 *
 *
 *  So we got:
 * temp[0][0] = 3;
 * temp[0][1] = 0;
 * temp[1][0] = 5;
 * temp[1][1] = 1;
 *
 *det = det + (sign * array[0][cofac] * determinant(temp, rows - 1, columns - 1));
 * det = 0 + (1 * array[0][0] * determinant(temp, 3-1=2, 3-1=2));
 * det = 0 + (1 * array[0][0] * determinant(temp, 2, 2));
 * det = 0 + (1 * 1 * determinant(temp, 2, 2));
 *
 * //Swapping
 * temp[0][0] = array[0][0] = 3;
 * temp[0][1] = array[0][1] = 0;
 * temp[1][0] = array[1][0] = 5;
 * temp[1][1] = array[1][1] = 1;
 *
 * Hence : determinant(temp, 2, 2) will re run the function again:
 * when cofac = 0:
 * getcofactor(array, temp, 2, 2, 0(p), 0(q), 0(i), 0(j), 0(s), 0(t)):
 *     if (i < 2):
 *        if (j < 2):
 *           if (i != 0(p) && j != 0(q))[False as i=0 and j=0, both should be not equal to 0]
 *          getCofactor(array, temp, 2, 2, 0(p), 0(q), 0(i), j=j+1=1, 0(s), 0(t));
 *
 * getcofactor(array, temp, 2, 2, 0(p), 0(q), 0(i), 1(j), 0(s), 0(t)):
 *    if (i < 2):
 *       if (j < 2):
 *         if (i != 0(p) && j != 0(q))[False as i=0 and j=1, both should be not equal to 0]
 *        getCofactor(array, temp, 2, 2, 0(p), 0(q), 0(i), j=j+1=2(j), 0(s), 0(t));
 *
 * j =2 , hence false, so it will go to else part:
 *
 * getCofactor(array, temp, 2, 2, 0(p), 0(q), i=i+1=1, 0(j), 0(s), 0(t));
 *
 * getcofactor(array, temp, 2, 2, 0(p), 0(q), 1(i), 0(j), 0(s), 0(t)):
 *   if (i < 2):
 *     if (j < 2):
 *      if (i != 0(p) && j != 0(q))[False as i=1 and j=0, both should be not equal to 0]
 *
 *     getCofactor(array, temp, 2, 2, 0(p), 0(q), 1(i), j=j+1=1, 0(s), 0(t));
 *
 * getcofactor(array, temp, 2, 2, 0(p), 0(q), 1(i), 1(j), 0(s), 0(t)):
 *  if (i < 2):
 *   if (j < 2):
 *   if (i != 0(p) && j != 0(q))[True as i=1 and j=1]:
 *      temp[0][0] = array[1][1] = 1;
 *     //t++ = 0+1 = 1;
 *    //if (t == 2-1)[True as t=1 and 2-1=1]
 *      //t = 0;
 *     //s++ = 0+1 = 1;
 *
 * getCofactor(array, temp, 2, 2, 0(p), 0(q), 1(i), j=j+1=2, 1(s), t=0);
 *
 * j =2 , hence false, so it will go to else part:
 *
 * getCofactor(array, temp, 2, 2, 0(p), 0(q), i=i+1=2, 0(j), 1(s), t=0);
 *
 * i =2 , end of recursion.
 *
 * So we got:
 * temp[0][0] = 1;
 *
 *
 * det = det + (sign * array[0][cofac] * determinant(temp, rows - 1, columns - 1));
 * det = 0 + (1 * array[0][0] * determinant(temp, 2-1=1, 2-1=1));
 * det = 0 + (1 * 1 * determinant(temp, 1, 1));
 *
 * //Swapping
 * temp[0][0] = array[0][0] = 1;
 *
 * As row = 1 and column =1, it will swap :
 * return array[0][0] = 1;
 *
 * det = 0 + (1 * 3 * 1);
 * det = 3;
 *
 * when cofac = 1:
 * getcofactor(array, temp, 2, 2, 0(p), 1(q), 0(i), 0(j), 0(s), 0(t)):
 *    if (i < 2):
 *      if (j < 2):
 *       if (i != 0(p) && j != 1(q))[False as i=1 and j=0]:
 *      getCofactor(array, temp, 2, 2, 0(p), 1(q), 0(i), j=j+1=1, 0(s), 0(t));
 *
 * getcofactor(array, temp, 2, 2, 0(p), 1(q), 0(i), 1(j), 0(s), 0(t)):
 *      if (i < 2):
 *          if (j < 2):
 *          if (i != 0(p) && j != 1(q))[False  as i=0 and j=1]:
 *              getCofactor(array, temp, 2, 2, 0(p), 1(q), 0(i), j=j+1=2, 0(s), 0(t));
 *
 * j =2 , hence false, so it will go to else part:
 * getCofactor(array, temp, 2, 2, 0(p), 1(q), i=i+1=1, 0(j), 0(s), 0(t));
 *
 * getcofactor(array, temp, 2, 2, 0(p), 1(q), 1(i), 0(j), 0(s), 0(t)):
 *  if (i < 2):
 *      if (j < 2):
 *             if (i != 0(p) && j != 1(q))[True as i=1 and j=0]:
 *              temp[0][0] = array[1][0] = 5;
 *                  //t++ = 0+1 = 1;
 *                      //if (t == 2-1)[True as t=1 and 2-1=1]
 *                          //t = 0;
 *                          //s++ = 0+1 = 1;
 *
 * getCofactor(array, temp, 2, 2, 0(p), 1(q), 1(i), j=j+1=1, 1(s), t=0);
 *
 * getcofactor(array, temp, 2, 2, 0(p), 1(q), 1(i), 1(j), 0(s), 0(t)):
 *          if (i < 2):
 *                  if (j < 2):
 *                  if (i != 0(p) && j != 1(q))[False as  j=1]:
 *                          getCofactor(array, temp, 2, 2, 0(p), 1(q), 1(i), j=j+1=2, 1(s), 0(t));
 *
 * j =2 , hence false, so it will go to else part:
 *
 * getCofactor(array, temp, 2, 2, 0(p), 1(q), i=i+1=2, 0(j), 1(s), 0(t));
 *
 * i =2 , end of recursion.
 *
 * So we got:
 * temp[0][0] = a[0][0]=5;
 *
 * det = det + (sign * array[0][cofac] * determinant(temp, rows - 1, columns - 1));
 * det = 3 + (-1 * array[0][1] * determinant(temp, 2-1=1, 2-1=1));
 * det = 3 + (-1 * 0 * determinant(temp, 1, 1));
 *
 * As row = 1 and column =1, it will  :
 * return array[0][0] = 5;
 *
 * det = 3 + (-1 * 0 * 5);
 * det = 3 + (0);
 * det = 3;
 *
 * Now if we go to formula:
 * arr[0][0] = 1
 * arr[0][1] = 0
 * arr[0][2] = 2
 * arr[1][0] = -1
 * arr[1][1] = 3
 * arr[1][2] = 0
 * arr[2][0] = 0
 * arr[2][1] = 5
 * arr[2][2] = 1
 * 
 * det = det + (sign * array[0][cofac] * determinant(temp, rows - 1, columns - 1));
 * det = 0 + (1 * array[0][0] * determinant(temp, 3-1=2, 3-1=2));
 * det = 0 + (1 * array[0][0] * determinant(temp, 2, 2));
 * det = 0 + (1 * 1 * determinant(temp, 2, 2));
 *
 * And determinant of 2x2 matrix is: 3
 *
 * So we got:
 * det = 0 + (1 * 1 * 3);
 * det = 3;
 *
 *This will continue till the end
 *
 *
 *
 *
 *
 *
 *
 *
 *
 * ********************************************************************************/