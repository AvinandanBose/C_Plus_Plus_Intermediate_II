// Addition of two Matrix
#include <iostream>
int input(int(*)[10], int, char);
void display(int (*)[10], int);
int add(int (*)[10], int (*)[10], int (*)[10], int);
using namespace std;
int main()
{

    int a[10],b[10],result[10];
    int m;
    cout << "Enter the size of the  array: ";
    cin >> m;
    char arr1 = 'a';
    char arr2 = 'b';
    cout << "Enter the elements of 1st  Matrix: " << endl;
    input(&a,m, arr1);
    cout << "Displaying the  Matrix: " << endl;
    display(&a, m);
    cout << "Enter the elements of  2nd Matrix: " << endl;
    input(&b, m, arr2);
    cout << "Displaying the  Matrix: " << endl;
    display(&b, m);
    add(&a,&b, &result, m);
    cout << "Displaying the  Addition of 2 Square Matrix: " << endl;
    display(&result, m);
    return 0;
}

int input(int (*a)[10], int size, char arr)
{
    if (arr == 'a')
    {
        for (int i = 0; i < size; i++)
        {
            cout << "a[" << i << "]: ";
            cin >> *(*a + i); //(*a)[i]
        }
    }
    else
    {
        for (int i = 0; i < size; i++)
        {
            cout << "b[" << i << "]: ";
            cin >> *(*a + i); //(*a)[i]
        }
    }

    cout << endl;
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

int add(int (*a)[10], int (*b)[10], int (*result)[10], int size)
{
    for (int i = 0; i < size; i++)
    {
        *(*result + i) = *(*a + i) + *(*b + i); //(*result)[i] = (*a)[i] + (*b)[i];
    }
    return *(*result + size); //(*result)[size]
}
