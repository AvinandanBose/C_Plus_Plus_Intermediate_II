//size of an array
// int size = sizeof(mat) / sizeof(mat[0]);

#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "Enter size of Matrix : " << endl;
    cin >> m;
    int arr[m];
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Size of array is : " << size << endl;

    
    cout << endl;
}