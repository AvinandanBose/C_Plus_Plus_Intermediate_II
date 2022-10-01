#include <iostream>
using namespace std;
int input(int (*)[10], int);
void display(int (*)[10], int);
int sum(int (*)[10], int);
int main()
{
    int n,a[10];
    cout << "Enter the number of rows/columns of the array: ";
    cin >> n;
    cout << "Enter the elements of the array: " << endl;
    input(&a, n);
    cout << "Displaying  the  matrix: " << endl;
    display(&a, n);
    cout << "The sum of the elements of the array is: " << sum(&a, n) << endl;

    return 0;
}
int input(int (*a)[10], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "a[" << i << "]: ";
        cin >> *(*a + i); //(*a)[i]
    }
    return *(*a + size);
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

int sum(int (*a)[10], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += *(*a + i); // sum +=(*a)[i]
    }
    return sum;
}
