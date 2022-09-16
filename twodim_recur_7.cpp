// Assigning signs in a matrix recursively
#include <iostream>
int assigningSign(int[][10], int, int, int, int);
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
    assigningSign(a, m1, n1, 0, 0);
    cout << "Displaying Signed Matrix:" << endl;
    display(m1, n1, a);

    return 0;
}

int assigningSign(int array[][10], int rows, int columns, int i, int j)
{
    if (i < rows)
    {
        if(j< columns){
            if (i == 0 && j == 0)
            {
                array[i][j] = 1;
            }
            else if (i == 1 && j == 0)
            {
                array[i][j] = -1;
            }
            else if ((i + j) % 2 == 0)
            {
                array[i][j] = 1;
            }
            else
            {
                array[i][j] = -1;
            }
            assigningSign(array, rows, columns, i, j + 1);
        }
        else{
            assigningSign(array, rows, columns, i + 1, 0);
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
