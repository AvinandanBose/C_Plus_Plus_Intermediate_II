#include <iostream>
int input(int **, int);
void display(int **, int);
using namespace std;
int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int a[size];
    int *p = a;
    cout<< "Enter array elements: " << endl;
    input(&p, size);
    cout << "Array elements are: " << endl;
    display(&p, size);
    return 0;
}
int input(int **q, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "a[" << i << "]: ";
        cin >> *(*q + i);
    }
    return *q[size];
}
void display(int **q, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << *(*q + i) << " ";
    }
}