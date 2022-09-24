#include <iostream>
int input(int *, int);
void display(int *, int);
using namespace std;
int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int a[size];
    cout << "Enter array elements: " << endl;
    input(a, size);
    cout << "Array elements are: " << endl;
    display(a, size);
    return 0;
}
int input(int *p, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "a[" << i << "]: ";
        cin >> *(p + i);
    }
    return p[size];
}
void display(int *p, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << *(p + i) << " ";
    }
}
