//Matrix multiplication using recursion
#include<iostream>
int input(int[], int, char);
void display(int[],int);
int multiply(int[], int[],int);
void rules();
using namespace std;
int main()
{

    rules();
    int m;
    cout << "Enter the size of the  array: ";
    cin >> m;
    int a[m], b[m];
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
    int sum = multiply(a, b, size);
    cout << "The sum of the multiplication of 2 Square 1-D Matrix is: " << sum << endl;
    
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

void display(int arr[], int size)
{
    cout << "[";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "]";
    cout << endl;
}
int multiply(int a[], int b[],int size)
{
    int sum = 0, count = 0,temp;
    if(size==0){
        return 0;
    }
    else{
        sum = (a[size-1] * b[size-1]) + multiply(a,b,size-1);
        
    }
    return sum;

    
}

void rules(){
    cout << "\tRule: Matrix A of (m x n ) must be multiplying with Matrix B of (n x m ) . " << endl;
    cout << "\tWhere m is the number of rows and n is the number of columns. " << endl;
    cout << "\tHence Condition is : n(no. of columns) of Matrix A = n(no. of rows) of Matrix B." << endl;
    cout << "\tTherefore,Column Vector can multiply with Row Vector i.e. (m x 1) x (1 x m) is always possible,"
         << "\n";
    cout << "\tAs column of Column Vector = rows of Rows Vector = 1 ." << endl;
    cout << "\tWhere as multiplication of Row Vector is only possible with Column Vector when," << endl;
    cout << "\tColumns of Row Vector(m) = rows(m) of Column Vector." << endl;
    cout << "\tAnd, Result = Singleton Matrix[where m= n = 1] when Row Vector[1xm] x Column Vector[mx1],"
         << "\n";
    cout << "\tAs row of Matrix A = column of Matrix B= 1 producing 1 x 1 matrix"
         << "\n";
    cout << "\tWhere as ,Column Vector(m x 1) x  Row Vector(1 x n) produces m x n matrix as result,"
         << "\n";
    cout << "\tWhere m= No. of Rows of Column Vector and n = No. of Columns in Row Vector "
         << "\n";
    cout << "*********************************************************" << endl;

    cout << "Row Vector x Column Vector [(1 x m) x (m x 1)] " << endl;
    cout << "Assuming m =m i.e. size of Row Vector and Column Vector are equal" << endl;
    cout << "\n";
}

/********************************************************
 * Normal Multiplication :
 * Just we have to understand the recursion technique:
 * say size = 3
 * a[0]= 1
 * a[1]= 2
 * a[2]= 3
 *
 * b[0]= 4
 * b[1]= 5
 * b[2]= 6
 * When sum= a[3-1=2]*b[3-1=2] + multiply(array,3-1=2);
 * sum = 3*6 + multiply(array,2);
 * sum = 18 + multiply(array,2);
 *
 * Now in Stack:
 * ----------
 * 18         (pushed in stack)
 * -----------
 *
 *
 * sum= a[2-1=1]*b[2-1=1] + multiply(array,2-1=1);
 * sum = 2*5 + multiply(array,1);
 * sum = 10 + multiply(array,1);
 *
 * Now in Stack:
 * 10        (pushed in stack)
 * ----------
 * 18
 * -----------
 *
 * sum= a[1-1=0]*b[1-1=0] + multiply(array,1-1=0);
 * sum = 1*4 + multiply(array,0);
 * sum = 4 + multiply(array,0);
 *
 *  Now in Stack:
 * 4   (pushed in stack)
 * ----------
 * 10
 * ----------
 * 18
 * -----------
 *
 * As size = 0 , return 0;
 *
 * Now in Stack Operation:
 *
 * 4
 * ----------
 * 10
 * ---------- => 10+4 = 14(pop)
 * 18
 * -----------
 *
 * 2nd Pop operation:
 * 
 * 14
 * ---------- => 14+18 = 32(pop)
 * 18
 * -----------
 * 
 * Last Stack Operation
 * 
 * -------------
 * 32
 * ----------- => 32
 *
 * Hence stack will be NULL
 * 
 * and Sum = 32
 *
 *
 *
 *
 *
 * *******************************************************/
