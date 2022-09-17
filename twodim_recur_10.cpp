// Calculate adjoint of a matrix using  cofactors through matrix recursion.
#include <iostream>
int input(int[][10], int, int);
void display(int, int, int[][10]);
int getCofactor(int[][10], int[][10], int, int, int, int, int, int, int, int);
int displayCofact(int[][10], int, int, int, int, int);
int determinant(int[][10], int, int);
int adjointMatrix(int [][10], int [][10], int , int , int , int );
using namespace std;
int main()
{
    cout << "This is for any higher order matrix" << endl;
    int a[10][10], adj[10][10];
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
        cout<<"\n";
        cout << "Cofactors of given above matrix" << endl;
        displayCofact(a, m1, n1, 0, 0, 0);
        cout <<"Ajoint of matrix is:" << endl;
        adjointMatrix(a, adj, m1, n1, 0, 0);
        display(m1, n1, adj);

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

        det = det + (sign * array[0][cofac] * determinant(temp, rows - 1, columns - 1));

        sign = -sign;
    }

    return det;
}

int displayCofact(int arr[][10], int rows, int columns, int i, int j, int count)
{

    int temp[10][10];
    if (i < rows)
    {
        if (j < columns)
        {
            getCofactor(arr, temp, rows, columns, i, j, 0, 0, 0, 0);
            cout << "Cofactor: " << count << endl;
            display(rows - 1, columns - 1, temp);
            cout << endl;
            displayCofact(arr, rows, columns, i, j + 1, count + 1);
        }
        else
        {
            displayCofact(arr, rows, columns, i + 1, 0, count + 1);
        }
    }
}

int adjointMatrix(int arr[][10],int adj[][10], int rows, int columns, int i, int j)
{

    int temp[10][10];
    int sign = 1;
    if (i < rows)
    {
        if (j < columns)
        {
            getCofactor(arr, temp, rows, columns, i, j, 0, 0, 0, 0);

            if((i+j)%2== 0){
                sign = 1;
            }
            else{
                sign = -1;

            }

            adj[j][i] = (sign)*(determinant(temp, rows - 1, columns - 1));

            adjointMatrix(arr, adj, rows, columns, i, j + 1);
        }
        else
        {
            adjointMatrix(arr,adj, rows, columns, i + 1, 0);
        }
    }
}