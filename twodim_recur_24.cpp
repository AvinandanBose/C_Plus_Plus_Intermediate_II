// Checking a matrix is sparse or not using recursion
// A sparse matrix is a matrix which has maximum number of zeroes as its elements.

#include <iostream>
int input(int[][10], int, int);
void display(int, int, int[][10]);
int countZeroes(int [][10], int , int , int , int , int );
void sparse(int [][10], int , int );
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
        sparse(a, m, n);
        
    

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
int countZeroes(int array[][10] ,int rows, int columns , int i, int j, int count)
{
    if(i== rows){
        return count;
    }
    
    if(i< rows){
        if(j<columns){
            if(array[i][j] == 0){
               count++;
            }
            countZeroes(array, rows, columns, i, j+1, count);
        }
        else{
            countZeroes(array, rows, columns, i+1, 0, count);
        }
    }
}

void sparse(int array[][10], int rows, int columns){
    
    int countZero = countZeroes(array, rows, columns, 0, 0, 0);
    
     if (countZero > (rows * columns) / 2)
    {
        cout<<"Matrix is sparse"<<endl;
    }
    else{
        cout<<"Matrix is not sparse"<<endl;
    }
}