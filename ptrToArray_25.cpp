//Pointer To Pointer
#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int a[size];
    int *p , **q;
    p = a;
    q = &p;
    cout << "Enter elements of array: " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1 << ": ";

        cin >> *(*q + i);
    }
    cout << "Array elements are: ";
    for (int i = 0; i < size; i++)
    {
        cout << *(*q+ i) << " ";
    }
}
