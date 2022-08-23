// Transpose of a 1DMatrix
#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter size of the Column Vector" << endl;
    cin >> size;
    int cvarr[size];
    int transposed[size];
    cout << "Enter elements in Row Vector" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter " << i << " th elements of cvarr[" << i << "]: ";
        cin >> cvarr[i];
    }
    cout<< "Row Vector Representation of Matrix B :(1 x m) Column Matrix" << endl;
    cout<<"[";
    for (int i = 0; i < size; i++)
    {
            
            cout << cvarr[i]<< " ";
        
    }
    cout<<"]"<< endl;
    cout <<"Transpose of a Row Matrix is Column Matrix(m x 1)" << endl;

    for (int i = 0; i < size; i++)
    {
            cout << "|  ";
            transposed[i] = cvarr[i];
            cout << transposed[i] <<" ";
            cout << "  |";
            cout << "\n";
    }
    
    return 0;
}