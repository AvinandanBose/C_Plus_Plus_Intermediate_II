#include<iostream>
int input(int[], int, char);
void display(int[], int);
int bubblesort(int[], int);
int intersectionSize(int [], int [], int );
int intersection(int [], int [], int[], int, int );
using namespace std;
int main(){
    int m;
    cout << "Enter the size of the  array: ";
    cin >> m;
    int a[m], b[m];
    int size = sizeof(a) / sizeof(a[0]);
    char arr1 = 'a';
    char arr2 = 'b';
    cout << "Enter the elements of 1st Matrix: " << endl;
    input(a, size, arr1);
    bubblesort(a, size);
    cout << "Displaying the first Matrix: " << endl;
    display(a, size);
    cout << "Enter the elements of 2nd Matrix: " << endl;
    input(b, size, arr2);
    bubblesort(b, size);
    cout << "Displaying the 2nd Matrix: " << endl;
    display(b, size);
    int Size2 = intersectionSize(a, b, size);
    int c[Size2];
    intersection(a, b, c, size,Size2);
    cout << "Displaying the Intersection of 2 Matrix: " << endl;
    display(c, Size2);
    return 0;
}

int input(int a[], int size, char arr)
{
    if (arr == 'a')
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr << "[" << i << "] = ";
            cin >> a[i];
        }
    }
    else
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr << "[" << i << "] = ";
            cin >> a[i];
        }
    }

    cout << endl;
    return a[size];
}
void display(int a[], int size)
{
    cout << "[";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << "]";
    cout << endl;
}
int bubblesort(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr[size];
}

int intersectionSize(int a[], int b[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        int num = a[i];
        for (int j = 0; j < size; j++)
        {
            if (num == b[j])
            {


                count++;
            }
        }
    }
    return count;
}

int intersection(int a[], int b[], int c[], int size, int size2)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        int num = a[i];
        for (int j = 0; j < size; j++)
        {
            if (num == b[j])
            {
                c[count] = num;
                count++;
            }
        }
    }
    return c[size2];
}
