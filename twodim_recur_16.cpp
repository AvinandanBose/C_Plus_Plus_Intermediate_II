// Upper Trangular Matrix using Recursion

#include <iostream>
int input(int[][10], int, int);
void display(int, int, int[][10]);
int showUpperTriangularMatrix(int[][10], int, int, int, int);
using namespace std;
int main()
{

    int a[10][10];
    int m, n;
    cout << "Enter row  for Matrix A: " << endl;
    cin >> m;
    cout << "Enter columns  for Matrix A: " << endl;
    cin >> n;
    if (m == n)
    {
        cout << "Enter the elements of Matrix A: " << endl;
        input(a, m, n);
        cout << "Displaying the Matrix A: " << endl;
        display(m, n, a);
        cout << "Displaying the Upper Triangular Matrix: " << endl;
        showUpperTriangularMatrix(a, m, n, 0, 0);
    }
    else
    {
        cout << "Matrix is not square matrix" << endl;
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
int showUpperTriangularMatrix(int arr[][10], int rows, int columns, int i, int j)
{
    if(i == rows){
        return 0;
    }
    if(j == columns){
        cout<<endl;
        return showUpperTriangularMatrix(arr, rows, columns, i + 1, 0);
    }
    if(i<j){
        cout<<arr[i][j]<<" ";
    }
    return showUpperTriangularMatrix(arr, rows, columns, i, j+1);


}