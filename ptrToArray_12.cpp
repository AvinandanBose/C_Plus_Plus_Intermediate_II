#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    int a[size];
    int *p = a;
    for(int i=0; i<size; i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>*(p+i);
    }
    cout<<"Array elements are: ";
    for(int i=0; i<size; i++){
        cout<<*(p+i)<<" ";
    }

}