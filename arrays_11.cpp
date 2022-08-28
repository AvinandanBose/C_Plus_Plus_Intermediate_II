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
    int arraySize =sizeof(arr);
    int getArrayLength = sizeof(arr)/ sizeof(arr[0]);
    cout << "Size of array is : " << arraySize << "bytes" << endl;
    cout << "getArrayLength is : " << getArrayLength  << endl;
    cout << endl;
}

/*****************************
 * size of an array
 * for 1 row/column
 * sizeof(arr) = 4[size of int = 4]/ or we can say 4*1
 * for 2 row/column
 * sizeof(arr) = 8 (4+4) [size of int = 4] / or we can say 4*2
 * for 3 row/column
 * sizeof(arr) = 12 (4+4+4) [size of int = 4]/ or we can say 4*3
 * etc.......
 *
 * Similarly ,Array Length
 * sizeof(arr[0]) = 4 [size of int = 4]
 * Hence size:
 * size = sizeof(arr) / sizeof(arr[0]);
 * for 1 row/column:
 * size = 4 /4 = 1
 * for 2 row/column:
 * size = 8 /4 = 2
 * for 3 row/column:
 * size = 12 /4 = 3
 * etc.......
 * ****************************************************************/
