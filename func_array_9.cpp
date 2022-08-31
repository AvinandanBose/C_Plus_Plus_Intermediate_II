// passing 3d array to function
#include <iostream>
using namespace std;

int input(int[][3][3], int);
void display(int[][3][3], int);
int main()
{
    int p;

    cout << "Enter the number of pages of the array: ";
    cin >> p;
    int arr[p][3][3];

    cout << "Enter the elements in 2-D array: " << endl;
    input(arr, p);

    cout << "Display the elements of 2-D array: " << endl;
    display(arr, p);

    return 0;
}
int input(int arr[][3][3], int p)
{
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                cout << "arr[" << i << "][" << j << "][" << k << "] = ";
                cin >> arr[i][j][k];
            }
        }
        cout << endl;
    }
    return arr[p][3][3];
}
void display(int arr[][3][3], int p)
{
    for (int i = 0; i < p; i++)
    {
        cout << "|";
        for (int j = 0; j < 3; j++)
        {
            cout << "|";
            for (int k = 0; k < 3; k++)
            {
                cout << arr[i][j][k] << " ";
            }
            cout << "|";
            cout << endl;
        }
        cout << endl;
    }
}