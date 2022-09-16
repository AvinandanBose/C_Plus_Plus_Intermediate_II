//Transpose of a Matrix Recursively

#include <iostream>
int input(int[][10], int, int);
void display(int, int, int[][10]);
int transpose(int[][10],int[][10], int, int, int, int);
using namespace std;
int main()
{
    
        int a[10][10], trans[10][10];
        int m1, n1;
        cout << "Enter row  for Matrix : " << endl;
        cin >> m1;
        cout << "Enter columns  for Matrix : " << endl;
        cin >> n1;
        input(a, m1, n1);
        cout << "Displaying Matrix:" << endl;
        display(m1, n1, a);
        transpose(a, trans, m1, n1, 0, 0);
        cout << "Displaying Transpose Matrix:" << endl;
        display(n1, m1, trans);
    
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
int transpose(int array[][10],  int trans[][10], int rows, int columns, int i, int j)
{
    if (i < rows)
    {
        if (j < columns)
        {
            trans[j][i] = array[i][j];
            transpose(array, trans, rows, columns, i, j + 1);
        }
        else
        {
            transpose(array,trans, rows, columns, i + 1, 0);
        }
    }
    return array[rows][10];
}