#include<iostream>
using namespace std;
int main(){
    int age[5]; //array definition
    float sum = 0.0f;
    for(int i=0;i<5;i++)
    {
        cout<<"Enter person " <<i+1 << " age:" ;
        cin>>age[i] ; //reading array elements
    }
    for (int i = 0; i < 5; i++)
    {
        sum = sum + age[i];
    }
    cout << "Sum of all of the person's ages: " << sum << endl;
    cout << "Average age =" << sum/5 << endl;
    

    return 0;
}