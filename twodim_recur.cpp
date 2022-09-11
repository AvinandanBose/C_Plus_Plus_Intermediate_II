#include <iostream>

int input(int[][10], int, int);
void display(int, int, int[][10]);
int initializeToZero(int[][10], int, int);
int multiply(int , int , int a[][10], int , int b[][10], int c[][10], int , int , int ) ;
using namespace std;
int main()
{
    int a[10][10], b[10][10], c[10][10];
    int m1, n1, m2, n2, i, j, k;
    cout << "Enter row  for Matrix A: " << endl;
    cin >> m1;
    cout << "Enter columns  for Matrix A: " << endl;
    cin >> n1;
    cout << "Enter row  for Matrix B: " << endl;
    cin >> m2;
    cout << "Enter columns  for Matrix B: " << endl;
    cin >> n2;
    if (n1 == m2)
    {

        cout << "Enter the elements of Matrix A: " << endl;
        input(a, m1, n1);
        cout << "Enter the elements of Matrix B: " << endl;
        input(b, m2, n2);
        cout << "Displaying the Matrix A: " << endl;
        display(m1, n1, a);
        cout << "Displaying the Matrix B: " << endl;
        display(m2, n2, b);
        initializeToZero(c, m1, n2);
        multiply(m1,n1, a, n2,b, c,0,0,0);
        cout << "Displaying the Matrix C: " << endl;
        display(m1, n2, c);
        return 0;
    }
    else
    {
        cout << "Matrix multiplication is not possible" << endl;
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
        cout << "|";
        cout << endl;
    }
}
int initializeToZero(int array[][10], int rows, int columns)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            array[i][j] = 0;
        }
    }
    return array[rows][10];
}
int multiply(int rowsA, int columnsA, int a[][10], int columnsB, int b[][10], int c[][10], int i, int j, int k)
{

    
    if (i < rowsA)
    {
        if (j < columnsB)
        {
            if (k < columnsA)
            {
                c[i][j] = c[i][j] +(a[i][k] * b[k][j]);


                multiply(rowsA, columnsA, a, columnsB, b, c, i, j, k + 1);
            }
            else
            {
                multiply(rowsA, columnsA, a, columnsB, b, c, i, j + 1, 0);
            }
            
        }
        else
        {
            multiply(rowsA, columnsA, a, columnsB, b, c, i + 1, 0, 0);
        }
        
    }

    return c[rowsA][columnsB];
}

/*************Workings*************
 *
 * From previous multiplication  , we came to know:
 * The elements of the columns of Matrix A with the elements of the rows of Matrix B
 * are multiplied and added to get the elements of the Matrix C.
 *
 * So, we will use the same logic here.
 *
 * We need Column of Matrix A and Matrix B and Row of Matrix A to multiply.
 * Matrix A(2x3):
 * |1 2 3|
 * |4 5 6|
 *
 * Matrix B(3x2):
 * |1 2|
 * |3 4|
 * |5 6|
 *
 * Multiplication:
 * |1*1+2*3+3*5  1*2+2*4+3*6|
 * |4*1+5*3+6*5  4*2+5*4+6*6|
 *
 * i = 0; j = 0 ; k = 0;
 *
 * int multiply(int rowsA, int columnsA, int a[][10], int columnsB, int b[][10], int c[][10], int i, int j, int k){
 *
 * i= 0 < 2(true):
 *     j= 0 < 2(true):
 *        k= 0 < 3(true):
 *           c[0][0] = c[0][0] + (a[0][0] * b[0][0]);
 *          c[0][0] = 0 + (1 * 1);
 *         c[0][0] = 1;
 *        multiply(2,3,a,2,b,c,0,0,1);
 *
 * i= 0 < 2(true):
 *    j= 0 < 2(true):
 *      k= 1 < 3(true):
 *        c[0][0] = c[0][0] + (a[0][1] * b[1][0]);
 *       c[0][0] = 1 + (2 * 3);
 *        c[0][0] = 7;
 *
 *       multiply(2,3,a,2,b,c,0,0,2);
 *
 * i= 0 < 2(true):
 *   j= 0 < 2(true):
 *    k= 2 < 3(true):
 *     c[0][0] = c[0][0] + (a[0][2] * b[2][0]);
 *      c[0][0] = 7 + (3 * 5);
 *      c[0][0] = 22;
 *
 *    multiply(2,3,a,2,b,c,0,0,3);
 *
 * else:
 *     multiply(2,3,a,2,b,c,0,1,0);
 *
 * i= 0 < 2(true):
 *      j= 1 < 2(true):
 *          k= 0 < 3(true):
 *          c[0][1] = c[0][1] + (a[0][0] * b[0][1]);
 *          c[0][1] = 0 + (1 * 2);
 *          c[0][1] = 2;
 *
 * multiply(2,3,a,2,b,c,0,1,1);
 *
 *      i= 0 < 2(true):
 *          j= 1 < 2(true):
 *              k= 1 < 3(true):
 *          c[0][1] = c[0][1] + (a[0][1] * b[1][1]);
 *          c[0][1] = 2 + (2 * 4);
 *          c[0][1] = 10;
 *
 * multiply(2,3,a,2,b,c,0,1,2);
 *
 *          i= 0 < 2(true):
 *              j= 1 < 2(true):
 *                  k= 2 < 3(true):
 *          c[0][1] = c[0][1] + (a[0][2] * b[2][1]);
 *          c[0][1] = 10 + (3 * 6);
 *          c[0][1] = 28;
 *
 *
 * multiply(2,3,a,2,b,c,0,1,3);
 *
 * else:
 *    multiply(2,3,a,2,b,c,0,2,0);
 *
 *
 * i= 0 < 2(true):
 *     j= 2 < 2(false):
 *
 * multiply(2,3,a,2,b,c,1,0,0);
 *
 *
 * i= 1 < 2(true):
 *    j= 0 < 2(true):
 *      k= 0 < 3(true):
 *         c[1][0] = c[1][0] + (a[1][0] * b[0][0]);
 *        c[1][0] = 0 + (4 * 1);
 *       c[1][0] = 4;
 *     multiply(2,3,a,2,b,c,1,0,1);
 *
 *      i= 1 < 2(true):
 *           j= 0 < 2(true):
 *              k= 1 < 3(true):
 *              c[1][0] = c[1][0] + (a[1][1] * b[1][0]);
 *              c[1][0] = 4 + (5 * 3);
 *              c[1][0] = 19;
 *
 * multiply(2,3,a,2,b,c,1,0,2);
 *
 *         i= 1 < 2(true):
 *             j= 0 < 2(true):
 *                k= 2 < 3(true):
 *               c[1][0] = c[1][0] + (a[1][2] * b[2][0]);
 *               c[1][0] = 19 + (6 * 5);
 *               c[1][0] = 49;
 *
 * multiply(2,3,a,2,b,c,1,0,3);
 *
 * else:
 *   multiply(2,3,a,2,b,c,1,1,0);
 *
 * i= 1 < 2(true):
 *   j= 1 < 2(true):
 *    k= 0 < 3(true):
 *    c[1][1] = c[1][1] + (a[1][0] * b[0][1]);
 *    c[1][1] = 0 + (4 * 2);
 *    c[1][1] = 8;
 *    multiply(2,3,a,2,b,c,1,1,1);
 *
 * i= 1 < 2(true):
 *      j= 1 < 2(true):
 *          k= 1 < 3(true):
 *          c[1][1] = c[1][1] + (a[1][1] * b[1][1]);
 *          c[1][1] = 8 + (5 * 4);
 *          c[1][1] = 28;
 *
 * multiply(2,3,a,2,b,c,1,1,2);
 *
 * i= 1 < 2(true):
 *      j= 1 < 2(true):
 *          k= 2 < 3(true):
 *          c[1][1] = c[1][1] + (a[1][2] * b[2][1]);
 *          c[1][1] = 28 + (6 * 6);
 *          c[1][1] = 64;
 *
 *
 *      multiply(2,3,a,2,b,c,1,1,3)(Flase k =3);
 *
 * else:
 *
 *      multiply(2,3,a,2,b,c,1,2,0)(Flase j =2);
 *
 * else:
 *      multiply(2,3,a,2,b,c,2,0,0)(Flase i =2);
 *
 *
 *exit:
 *
 * Note if not understand why column of MatrixA is needed please visit:
 *
 * https://github.com/AvinandanBose/C_Plus_Plus_Intermediate_II/blob/main/two_dim_arrays_7.cpp
 *
 *
 *
 *
 *
 *
 * }
 *
 *
 *
 *
 *
 *
 *
 *
 *
 * *******************************/
