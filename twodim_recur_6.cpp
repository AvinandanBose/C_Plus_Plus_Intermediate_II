//Creation of Null Matrix through recursion

#include <iostream>
int createNullMatrix(int [][10], int, int, int, int ); 
void display(int, int, int[][10]);
using namespace std;
int main()
{
    
    int a[10][10];
    int m1, n1;
    cout << "Enter row  for Matrix : " << endl;
    cin >> m1;
    cout << "Enter columns  for Matrix : " << endl;
    cin >> n1;
    createNullMatrix(a, m1, n1, 0, 0);
    cout << "Displaying Matrix:" << endl;
    display(m1, n1, a);
    
    return 0;
}

int createNullMatrix(int array[][10], int rows, int columns, int i, int j)
{
    if (i < rows)
    {
        if (j < columns)
        {
            array[i][j] = 0;
            createNullMatrix(array, rows, columns, i, j + 1);
        }
        else
        {
            createNullMatrix(array, rows, columns, i + 1, 0);
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


