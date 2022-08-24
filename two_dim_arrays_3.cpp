#include <iostream>
using namespace std;
int main()
{
    int rowsize;
    int colsize;

    cout << "Enter row size" << endl;
    cin >> rowsize;
    cout << "Enter column size" << endl;
    cin >> colsize;
    int mat[rowsize][colsize];
    cout << "Enter elements in 1st Matrix: " << endl;
        for (int i = 0; i < rowsize; i++)
        {
            for (int j = 0; j < colsize; j++)
            {
                cout << "arr[" << i << "][" << j << "] = ";
                cin >> mat[i][j];
            }
        }
        cout <<"Displaying 1st Matrix:" << endl;
        for (int i = 0; i < rowsize; i++)
        {
            cout << "|";
            for (int j = 0; j < colsize; j++)
            {
            
                
                cout << mat[i][j]<<" ";   
               
            }
            cout << "|";
            cout <<  endl;
        }
}