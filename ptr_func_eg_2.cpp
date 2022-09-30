#include <iostream>
int input(int *, int);
void display(int *, int);
int largestelem(int *, int) ;
using namespace std;
int main()
{
    int m;
    cout << "Enter the size of the  array: ";
    cin >> m;
    int a[m];
    int size = sizeof(a) / sizeof(a[0]);
    cout << "Enter the elements of  Matrix: " << endl;
    input(a, size);
    cout << "Displaying the  Matrix: " << endl;
    display(a, size);
    cout << "Largest element in the Array is:" << endl;
    cout << largestelem(a, size);

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
    cout << "[";
    for (int i = 0; i < size; i++)
    {
        cout << *(p + i) << " ";
    }
    cout << "]";
    cout << endl;
}
int largestelem(int *p, int size)
{
    int largest = *p; // *(p + 0) => *p
    for (int i = 0; i < size; i++)
    {
        if (*(p + i) > largest)
        {
            largest = *(p + i);
        }
    }
    return largest;
}