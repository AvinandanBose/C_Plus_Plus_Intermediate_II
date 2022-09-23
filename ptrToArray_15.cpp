#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int a[size];
   
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> *(a + i);
    }
    cout << "Array elements are: ";
    for (int i = 0; i < size; i++)
    {
        cout << *(a + i) << " ";
    }
}