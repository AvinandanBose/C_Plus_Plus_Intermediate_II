#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout << "Enter array elements: " << endl;
    for(int i = 0; i < 5; i++){
        cout<<"Enter elements of arr["<<i <<"]: " ;
        cin>> arr[i];
    }
    cout << "Entered array's elements according to its index values: " << endl;
    for(int i = 0; i < 5; i++){
        cout<<"arr[" << i << "] = " << arr[i] << endl;
    }

    return 0;
}