//union of 2 arrays having distinct elements
#include <iostream>
int input(int [], int,char);
void display(int[], int ) ;
int bubblesort(int[], int);
bool checkdistinct(int[], int[], int);
int uniondistinct(int[], int[], int[],  int, int);
using namespace std;
int main(){
    int m;
    cout << "Enter the size of the  array: ";
    cin >> m;
    int a[m], b[m];
    int size = sizeof(a)/sizeof(a[0]);
    int size2 = size*2;
    int c[size2];
    char arr1 ='a';
    char arr2 = 'b';
    cout<<"Enter the elements of 1st Matrix: "<< endl;
    input(a,size,arr1);
    bubblesort(a,size);
    cout << "Displaying the first Matrix: "<< endl;
    display(a,size);
    cout << "Enter the elements of 2nd Matrix: " << endl;
    input(b, size, arr2);
    bubblesort(b, size);
    cout << "Displaying the 2nd Matrix: " << endl;
    display(b, size);

    if (checkdistinct(a,b,size)== true){
        uniondistinct(a,b,c,size,size2);
        display(c, size2);
    }
    else{
        cout<<"The arrays are not distinct"<<endl;
    }

        return 0;
}
int input(int a[], int size, char arr){
    if(arr == 'a'){
        for (int i = 0; i < size; i++)
        {
            cout << arr << "[" << i << "] = ";
             cin >> a[i];
        }
    }
    else{
        for (int i = 0; i < size; i++)
        {
            cout << arr << "[" << i << "] = ";
             cin >> a[i];
        }
    }
    
    cout << endl;
    return a[size];
}

void display(int a[], int size){
    cout<<"[";
    for(int i = 0; i < size; i++){
        cout << a[i] << " ";
    }
    cout << "]";
    cout << endl;
}

bool checkdistinct(int a[], int b[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        int num = a[i];
        for (int j = 0; j < size; j++)
        {
            if (num == b[j])
            {

                count = count + 1;
            }
        }
    }
    if (count == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int bubblesort(int arr[],int size){

    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
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
int uniondistinct(int arr1[], int arr2[], int res[], int size, int size2)
{

    for (int i = 0; i < size; i++)
    {
        res[i] = arr1[i];
    }
    for (int i = size; i < size2; i++)
    {
        res[i] = arr2[i-size];
    }
    return res[size2];
}
/****************************************************************
 * Workings:
 * if the elements are disticnt:
 * As matrix is a square matrix :
 * Resultant  matrix will have size*2( Size of A and Size of B )
 * Say size of Matrix A and B is : 2.
 * Union of Resultant matrix will have size*2( Size of A and Size of B )i.e. 4
 * 1st Resultant will matrix will take :
 * all the elements from matrix A.(0 to Size of A and B)) 
 * i.e. Next 2 adjancent memory will be allocated with elements of Matrix B i.e. : 
 * for(int i =2; i< 4; i++)
 * {
 *      res[i] = arr2[i-size];
 *  i.e. res[2] = arr2[2-2] = arr2[0];
 * res[3] = arr2[3-2] = arr2[1];
 *     
 * }
  
 * ********************/