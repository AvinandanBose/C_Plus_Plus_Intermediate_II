//Greatest among all elements under userdefined size.
#include <iostream>
using namespace std;
int main(){
    long int size;  
    int large_elem=0;
    cout << "Enter an size of the array: " <<endl;
    cin >> size;
    int arr[size];
    cout << "Enter elements in the array: " <<endl;
    for(int i=0;  i<size; i++){
        cout<<"Enter elements of arr["<<i <<"]: " ;
        cin>> arr[i];

    }
    for(int i=0;  i<size; i++){    
        if( arr[0] < arr[i]){
            arr[0] = arr[i];         
        }
    }
    cout << "Large elements among all elements in array: " <<arr[0] <<endl;
    return 0;
}

/****************************************************************
 * Workings:
 * size = 5
 * arr[0] = 11 
 * arr[1] = 123
 * arr[2] = 455
 * arr[3] = 56
 * arr[4] = 12 
 * 
 * i=0
 * if arr[0] = 11 < arr[ i=0] = 11 [false]
 * 
 * i=1
 * if arr[0] = 11< arr[ i=1 ] = 123 [true]
 *  : arr[0] = arr[1] = 123
 * 
 * i=2
 * if arr[0] = 123< arr[ i=2] = 455 [true]
 *      : arr[0] = arr[2] = 455
 * 
 * i=3
 * if arr[0] = 455< arr[ i=3] = 56 [false]
 * 
 * i=4
 * if arr[0] = 455< arr[ i=4] = 12 [false]
 * ****************************************************************