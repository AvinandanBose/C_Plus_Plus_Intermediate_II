#include<iostream>
using namespace std;
int main(){
    int rowsize ;
    int colsize ;
    
    cout << "Enter row size" << endl;
    cin >> rowsize;
    cout << "Enter column size" << endl;
    cin >> colsize;
    int arr[rowsize][colsize];
     cout << "Enter elements in the 2D array: " <<endl;
    for(int i = 0; i<rowsize;i++){
        for(int j =0; j<colsize;j++){
            cout <<"arr[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }
    cout <<"Representation of 2D array" << endl;

    
    for(int i = 0; i<rowsize;i++){
        for(int j =0; j<colsize;j++){
            cout <<"arr[" << i << "][" << j << "] = " <<arr[i][j] << endl;
        }
    }
    return 0;
}