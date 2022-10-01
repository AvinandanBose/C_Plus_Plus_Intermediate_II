#include <iostream>
int input(int (*)[], int);
void display(int (*)[], int);
int largestelem(int (*)[10], int);
using namespace std;
int main()
{
    int n, a[10];
    cout << "Enter the number of rows/columns of the array: ";
    cin >> n;
    cout << "Enter the elements of the array: " << endl;
    input(&a, n);
    cout << "Displaying  the  matrix: " << endl;
    display(&a, n);
    cout << "Largest element in the Array is:" << endl;
    cout << largestelem(&a, n);

    return 0;
}

int input(int (*a)[10], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "a[" << i << "]: ";
        cin >> *(*a + i); //(*a)[i]
    }
    return *(*a + size); //(*a)[size];
}

void display(int (*a)[10], int size)
{
    cout << "[";
    for (int i = 0; i < size; i++)
    {
        cout << *(*a + i) << " "; //(*a)[i]
    }
    cout << "]";
    cout << endl;
}

int largestelem(int (*a)[10], int size)
{
    int largest = *(*a + 0);
    for (int i = 0; i < size; i++)
    {
        if (*(*a + i) > largest) // if ((*a)[i]> largest)
        {
            largest = *(*a + i); //(*a)[i]
        }
    }
    return largest;
}
