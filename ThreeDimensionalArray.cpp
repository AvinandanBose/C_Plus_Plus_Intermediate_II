//ThreeDimensionalArray
#include <iostream>
using namespace std;
int main(){
    int m,n,p;
    cout << "Enter the number of Pages in the matrix: ";
    cin >> p;
    cout<<"Enter the number of Rows in the matrix: ";
    cin>>m;
    cout<<"Enter the number of Columns in the matrix: ";
    cin>>n;
    
    int a[p][m][n];
    for(int i=0;i<p;i++){
        for(int j=0;j<m;j++){
            for(int k=0;k<n;k++){
                cout <<"a[" << i << "][" << j << "][" << k << "] = ";
                cin>>a[i][j][k];
            }
        }
    }
    cout << endl;
    cout << " Representation of 3 - D Matrix  :(p x m x n) :" << endl;
    cout << endl;
    for(int i=0;i<p;i++){  
        for(int j=0;j<m;j++){
            cout << "|";
            for(int k=0;k<n;k++){
                cout<<a[i][j][k]<<" ";
            }
            cout<<"|";
            cout<<endl;
        }
        cout<<endl;
    }

    
    
    return 0;
}