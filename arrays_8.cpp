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
    cout << "Enter elements in Column Vector" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter " << i << " th elements of cvarr[" << i << "]: ";
        cin >> cvarr[i];
    }
    cout<< "Column  Vector Representation of Matrix B :(m x 1) Column Matrix" << endl;
    for (int i = 0; i < size; i++)
    {
            cout << "|  ";
            cout << cvarr[i];
            cout << "  |";
            cout << "\n";
    }
    cout <<"Transpose of a Column Matrix is Row Matrix" << endl;
    cout<<"[";
    for (int i = 0; i < size; i++)
    {
            transposed[i] = cvarr[i];
            cout << transposed[i] <<" ";
    }
    cout<<"]"<< endl;
    return 0;
}