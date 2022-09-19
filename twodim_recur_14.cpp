//Find Smallest Number using Recursion in a 2D array
#include <iostream>
int input(int[][10], int, int);
void display(int, int, int[][10]);
int findSmallest(int [][10], int , int , int , int , int );

using namespace std;
int main()
{

    int a[10][10];
    int m, n;
    cout << "Enter row  for Matrix A: " << endl;
    cin >> m;
    cout << "Enter columns  for Matrix A: " << endl;
    cin >> n;
    cout << "Enter the elements of Matrix A: " << endl;
    input(a, m, n);
    cout << "Displaying the Matrix A: " << endl;
    display(m, n, a);
    
    int Smallest = findSmallest(a, m, n, 0, 0,a[0][0] );
    cout << "The  smallest element in the matrix is: " << Smallest << endl;

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

int findSmallest(int arr[][10], int rows, int columns, int i, int j,int min)
{
    if(i == rows){
        return min;
    }
    if(i < rows){
        if(j< columns){
            if(arr[i][j] < min){
                min = arr[i][j];
            }
             findSmallest(arr, rows, columns, i, j+1, min);
        }
        else{
            findSmallest(arr, rows, columns, i+1, 0, min);
        }
    }
   
}
