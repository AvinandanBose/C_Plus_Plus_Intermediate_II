//Sum each elements of array 
#include <iostream>
using namespace std;
int main(){
    int size;  
    int sum=0;
    cout << "Enter an size of the array: " <<endl;
    cin >> size;
    int arr[size];
    cout << "Enter elements in the array: " <<endl;
    for(int i=0;  i<size; i++){
        cout<<"Enter elements of arr["<<i <<"]: " ;
        cin>> arr[i];

    }
    for(int i=0;  i<size; i++){
            sum = sum + arr[i];
    }
    cout << "Sum =" <<sum << endl;

    return 0;
}