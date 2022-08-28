#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter size of Matrix : " << endl;
    cin >> m >> n;
    int arr[m][n];
    int arraySize = sizeof(arr);
    int sizeofarr = sizeof(arr[0]);
    int sizeofarrarr = sizeof(arr[0][0]);
    int getRowLength = sizeof(arr) / sizeof(arr[0]);
    int getColumnLength = sizeof(arr[0]) / sizeof(arr[0][0]);
    cout << "Size of array is : " << arraySize << "bytes" << endl;
    cout << "getRowLength is : " << getRowLength  << endl;
    cout << "getColumnLength is : " << getColumnLength  << endl;
    cout << sizeofarr << endl;
    cout << sizeofarrarr  << endl;

    cout << endl;

    return 0;
}

/*****************************
 * size of an array
 * for
 * 1 row
 * 1 column
 * sizeof(arr) = 4[size of int = 4]→ 4*1(row)*1(column)
 * for 1 row
 *     2 column
 * sizeof(arr) = 8 [size of int = 4] →  4*1(row)*2(column)
 *
 * for 1 row
 *    3 column
 * sizeof(arr) = 12 [size of int = 4] →  4*1(row)*3(column)
 *
 * for 4 row
 *   3 column
 *   sizeof(arr) = 48 [size of int = 4] →  4*4(row)*3(column)
 *
 * etc.... and it goes on..
 *
 *
 * Similarly ,Row Length
 * for 4 row
 *   3 column
 * Which means a single row has 4 columns:
 *    constitues size : 4+4+4 or 4*3 = 12
 * Row Length = sizeof(arr) / sizeof(arr[0]); → [ 4*4(row)*3(column)]48 / 12 = 4
 *
 * in same way,
 * for 4 row
 *   2 column
 * Which means a single row has 2 columns:
 *   constitues size : 4+4 or 4*2 = 8
 * Row Length = sizeof(arr) / sizeof(arr[0]); → [ 4*4(row)*2(column)]32 / 8 = 4
 *
 * etc.... and it goes on..
 *
 * Similarly ,Column Length
 * for 4 row
 *  3 column
 * Which means a single row has 3 column and each column has 4 bytes.
 *   constitues size : 4
 *  and sizeof(arr[0][0]) = 4 constants.
 * Column Length = sizeof(arr[0]) / sizeof(arr[0][0]); → [ 4*4(row)*3(column)]48 / 4 = 3
 *
 * in same way,
 * for 4 row
 * 2 column
 * Which means a single row has 2 column and each column has 4 bytes.
 *  constitues size : 4
 * and sizeof(arr[0][0]) = 4 constants.
 * Column Length = sizeof(arr[0]) / sizeof(arr[0][0]); → [ 4*4(row)*2(column)]32 / 4 = 2
 *
 * etc.... and it goes on..
 * ****************************************************************/