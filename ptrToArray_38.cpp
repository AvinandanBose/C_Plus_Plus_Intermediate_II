// Array of Pointers
#include <iostream>
int input(int, int, int (*)[10][10]);
void display(int,int, int (*)[10][10]);
using namespace std;
int main()
{

    int m,n, a[10][10];
    cout << "Enter the row of the array" << endl;
    cin >> m;
    cout << "Enter the columns of the array" << endl;
    cin >> n;
    cout << "Enter array elements: " << endl;
    input(m,n, &a);
    cout << "The elements in the 1D Array are:";
    display(m,n, &a);

    return 0;
}
int input(int row, int col, int (*ptr)[10][10])
{

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> *(*((*ptr) + i) + j);
        }
    }
    return *(*((*ptr)+row)+col);
}
void display(int row, int col, int (*ptr)[10][10])
{
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << *(*((*ptr) + i) + j) << " ";
        }
    }
}