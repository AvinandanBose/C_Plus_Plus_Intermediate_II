//Checking a matrix is sparse or not
//A sparse matrix is a matrix which has maximum number of zeroes as its elements.
#include <iostream>
using namespace std;
int main(){
    int m, n, count =0;
    cout << "Enter Row of Matrix A: " << endl;
    cin >> m;
    cout << "Enter Column of Matrix A: " << endl;
    cin >> n;
    int arr[m][n];
    int getRowLength = sizeof(arr) / sizeof(arr[0]);
    int getColumnLength = sizeof(arr[0]) / sizeof(arr[0][0]);
    cout << "Enter elements in the  Matrix: " << endl;
    cout << "\n";
    for (int i = 0; i < getRowLength; i++)
    {
        for (int j = 0; j < getColumnLength; j++)
        {
            cout << "arr[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }
    cout << "\n";
    cout << " Representation of Matrix  :(m x n) :" << endl;
    cout << "\n";
    for (int i = 0; i < getRowLength; i++)
    {
        cout << "|";
        for (int j = 0; j < getColumnLength; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "|";
        cout << endl;
    }
    cout << "\n";
    cout << " Checking a Matrix is Sparse / Not Sparse initiating..." << endl;
    cout << "\n";
    for (int i = 0; i < getRowLength; i++)
    {
        
        for (int j = 0; j < getColumnLength; j++)
        {
            if (arr[i][j] == 0)
            {
                count++;
            }   

        }
        
    }
    if(count > (getRowLength*getColumnLength)/2){
        cout << "Matrix is Sparse" << endl;
    }
    else{
        cout << "Matrix is not Sparse" << endl;
    }
    return 0;
}

/*****************************
 * A sparse matrix is a matrix which have greater number of zeroes
 * as its elements.
 * 
 * Note: -
 * 
 * Number of zeroes must be greater than (rows * columns)/2
 * i.e . if rows = 3 and columns = 3 then (3 * 3)/2 = 9/2 = 4 zeroes
 * 
 * Hence it must have 5 or more than 5 zeroes i.e. greater than that of 4.
 * 
 * In a matrix.
 * 
 * ************************************************/