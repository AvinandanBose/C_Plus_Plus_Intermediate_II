// Array of Pointers - 2D
#include <iostream>
using namespace std;
int main()
{

    int m,n;
    cout << "Enter the rows of the array" << endl;
    cin >> m;
    cout << "Enter the columns of the array" << endl;
    cin >> n;
    int a[m][n];
    int(*ptr)[m][n];
    ptr = &a;

    cout << "Enter the elements in 2D  Array" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> *(*((*ptr) + i) + j);
        }
    }

    cout << "The elements in the 2D Array are:";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << *(*((*ptr) + i) + j) << " ";
        }
    }

    return 0;
}