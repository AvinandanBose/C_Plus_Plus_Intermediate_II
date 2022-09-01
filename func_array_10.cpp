//Checking 2 arrays have Unique and Distinct elements 

#include <iostream>
int input(int[], int, char);
void display(int[], int);
bool checkdistinct(int[], int[], int);

using namespace std;
int main()
{
    int m;
    cout << "Enter the size of the  array: ";
    cin >> m;
    int a[m], b[m];
    int size = sizeof(a) / sizeof(a[0]);
    int size2 = size * 2;
    int c[size2];
    char arr1 = 'a';
    char arr2 = 'b';
    cout << "Enter the elements of 1st Matrix: " << endl;
    input(a, size, arr1);
    cout << "Displaying the first Matrix: " << endl;
    display(a, size);
    cout << "Enter the elements of 2nd Matrix: " << endl;
    input(b, size, arr2);
    cout << "Displaying the 2nd Matrix: " << endl;
    display(b, size);

    if( checkdistinct(a, b, size) == true ){
        cout << "Elements in both the arrays are distinct" << endl;
    }
    else{
        cout << "The arrays doesnot have distinct elements" << endl;
    }
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

bool checkdistinct(int a[], int b[], int size){
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        int num = a[i];
        for (int j = 0; j < size; j++)
        {
            if (num == b[j])
            {

                count  = count +1;
                
                
            }
            
        }
        }
        if(count == 0){
            return true;
        }
        else{
            return false;
        }               
 }