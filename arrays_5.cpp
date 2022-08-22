// Addition of two 1D Matrices
#include <iostream>
using namespace std;
int main()
{
    
    cout<<"Rule: rows and columns must be equal to perform addition of two matrices. " << endl;
    cout<<"Hence Size of Two Matrices Must Be Same. Being either rows or columns = 1" << endl;
    cout <<"That is  (m x 1) +( m x 1) format or (1 x n) + (1 x n) format " <<"\n";
    cout <<"(m x 1) format = Column Matrix/ Column Vector " <<"\n";
    cout <<"(1 x n) format = Row Matrix/ Row Vector " <<"\n";
    cout <<"*********************************************************"<< endl;
    
    int size;
    cout << "Enter size of the 1st and 2nd array: " << endl;
    cin >> size;
    int mat1[size];
    int mat2[size];
    int resMat[size];
    cout << "Enter elements in the 1st Matrix: " << endl;
    for (int i = 0; i < size; i++)
        {
            cout << "Enter " <<i <<" th elements of mat1[" << i << "]: ";
            cin >> mat1[i];
        }
        cout << "\n";
        cout << "Enter elements in the 2nd Matrix: " << endl;
        for (int i = 0; i < size; i++)
        {
            cout << "Enter " <<i <<" th elements of mat2[" << i << "]: ";
            cin >> mat2[i];
        }
        cout << "\n";
        for (int i = 0; i < size; i++)
        {
            
            resMat[i] = mat1[i] + mat2[i];
        }

        cout << "Representation of Addition of Matrix if it is :(m x 1) Column Matrix" << endl;
        
        for (int i = 0; i < size; i++)
        {
            cout<< "|"; 
            cout << resMat[i] ;
            cout<< "|";
            cout << "\n";
            
        }
        
        cout << "Representation of Addition of Matrix if it is :(1 x n) Row Matrix" << endl;
        cout<<"[";
        for (int i = 0; i < size; i++)
        {
            
            cout << resMat[i] << " " ;
           
        }
         cout<<"]";
    
    

    return 0;
}