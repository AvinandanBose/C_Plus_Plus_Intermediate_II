#include <iostream>
int input(int[], int, char);
void display(int[], int);
int multiply(int[], int[], int[], int);
using namespace std;
int main()
{
    int m;
    cout << "Enter the size of the  array: ";
    cin >> m;
    int a[m], b[m], result[m];
    char arr1 = 'a';
    char arr2 = 'b';
    int size = sizeof(a) / sizeof(a[0]);
    cout << "Enter the elements of 1st  Matrix: " << endl;
    input(a, size, arr1);
    cout << "Displaying the  Matrix: " << endl;
    display(a, size);
    cout << "Enter the elements of  2nd Matrix: " << endl;
    input(b, size, arr2);
    cout << "Displaying the  Matrix: " << endl;
    display(b, size);
    int size2 =multiply(a, b, result, size);
    cout << "Displaying the Multplication of 2 Square 1-D Matrix: " << endl;
    display(result, size2);

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
int multiply(int a[], int b[], int result[], int size)
{
    int sum = 0, count = 0, temp;
    for (int i = 0; i < size; i++)
    {
        sum = sum + (a[i] * b[i]);
        
    }
     temp= sum;
    while(temp!=0){
        temp=temp/10;
        count++;
    }
    cout <<temp<< endl;
    result[temp] = sum;
    return temp+1; 
}

/*******************************
 * result[0] stores the result of multiplication, hence we return temp+1
 * As loop will run only once.
 *i.e i = 0 and i < 1 
 * ********************/