//passing 2d array to function
#include<iostream>
using namespace std;
#define size 3
int input(int [][size], int);
void display(int [][size], int);
int main()
{
    int m; 
    cout << "Enter the number of rows of the array: ";
    cin >> m ;
    
    int arr[m][size];
    cout << "Enter the elements in 2-D array: " <<endl;
    input(arr,m);
    cout << "Display the elements of 2-D array: " << endl;
    display(arr,m);
    return 0;
}
int input(int arr[][size], int m)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout<<"arr[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }
    return arr[m][size];
}
void display(int arr[][size], int m)
{
    
    for (int i = 0; i < m; i++)
    {
        cout << "|";
        for (int j = 0; j < size; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "|";
        cout << endl;
    }
    
}