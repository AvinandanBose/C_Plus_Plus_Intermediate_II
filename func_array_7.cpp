// passing 2d array to function
#include <iostream>
using namespace std;
int input(int[][3], int);
void display(int[][3], int);
int main()
{
    int m;
    cout << "Enter the number of rows of the array: ";
    cin >> m;

    int arr[m][3];
    cout << "Enter the elements in 2-D array: " << endl;
    input(arr, m);
    cout << "Display the elements of 2-D array: " << endl;
    display(arr, m);
    return 0;
}
int input(int arr[][3], int m)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "arr[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }
    return arr[m][3];
}
void display(int arr[][3], int m)
{

    for (int i = 0; i < m; i++)
    {
        cout << "|";
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "|";
        cout << endl;
    }
}