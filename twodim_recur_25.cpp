// Displaying the 2D matrix in reverse Order
#include <iostream>
int input(int[][10], int, int);
void display(int, int, int[][10]);
int reverseOrder(int [][10], int [][10], int , int , int , int ); 
using namespace std;
int main()
{
    int a[10][10], c[10][10];
    int m, n;
    cout << "Enter row  for Matrix A: " << endl;
    cin >> m;
    cout << "Enter columns  for Matrix A: " << endl;
    cin >> n;
    input(a, m, n);
    cout << "Displaying the matrix A: " << endl;
    display(m, n, a);
    reverseOrder(a,c, m, n, 0, 0);
    cout<< "Displaying the matrix C i.e. Reverse order of Matrix A: " << endl;
    display(m, n, c);

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

int reverseOrder(int array[][10], int arr2[][10], int rows, int columns, int i, int j)
{

    if (i == rows)
    {
        return arr2[rows][columns];
    }

    if (i < rows)
    {
        if (j < columns)
        {
            arr2[i][j] = array[rows - i - 1][columns - j - 1];
            reverseOrder(array, arr2, rows, columns, i, j + 1);
        }
        else
        {
            reverseOrder(array, arr2, rows, columns, i + 1, 0);
        }
    }
}