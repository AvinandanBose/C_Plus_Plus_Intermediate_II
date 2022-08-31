// passing 3d array to function
#include <iostream>
using namespace std;
const int size=3;
int input(int[][size][size], int);
void display(int[][size][size], int);
int main()
{
    int p;
   

    cout << "Enter the number of pages of the array: ";
    cin >> p;
    int arr[p][size][size];
    
    cout << "Enter the elements in 2-D array: " << endl;
    input(arr,p);
    
    cout << "Display the elements of 2-D array: " << endl;
    display(arr, p);
    
    return 0;
}
int input(int arr[][size][size], int p)
{
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; k < size; k++)
            {
                cout << "arr[" << i << "][" << j << "][" << k << "] = ";
                cin >> arr[i][j][k];
            }                                               
            
        }
        cout << endl;
    }
    return arr[p][size][size];
}
void display(int arr[][size][size], int p)
{
    for (int i = 0; i < p; i++)
    {
        cout << "|";
        for (int j = 0; j < size; j++)
        {
            cout << "|";
            for (int k = 0; k < size; k++)
            {
                cout << arr[i][j][k] << " ";
            }
            cout << "|";
            cout << endl;
        }
        cout << endl;
    }
    
}