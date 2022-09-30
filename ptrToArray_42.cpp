// Array of Pointers
#include <iostream>
int input(int, int, int, int (*)[10][10][10]);
void display(int, int, int, int (*)[10][10][10]);
using namespace std;
int main()
{

    int p, m, n, a[10][10][10];
    cout << "Enter the number of pages" << endl;
    cin >> p;
    cout << "Enter the row of the array" << endl;
    cin >> m;
    cout << "Enter the columns of the array" << endl;
    cin >> n;
    cout << "Enter array elements: " << endl;
    input(p, m, n, &a);
    cout << "The elements in the 1D Array are:";
    display(p, m, n, &a);
    return 0;
}
int input(int pages, int row, int col, int (*ptr)[10][10][10])

{

    for (int k = 0; k < pages; k++)
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << "a[" << k << "][" << i << "][" << j << "] = ";
                cin >> (*ptr)[k][i][j];
            }
        }
    }

    return *(*(*((*ptr) + pages) + row) + col);
}

void display(int pages, int row, int col, int (*ptr)[10][10][10])
{
    for (int k = 0; k < pages; k++)
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << (*ptr)[k][i][j] << " ";
            }
        }
    }
}
