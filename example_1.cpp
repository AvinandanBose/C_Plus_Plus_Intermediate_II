#include<iostream>
int func (int a , int i);
using namespace std;
int main() {
    int a=5;
    int i = 0;
    int b = func(a, i);
    cout << "The sum of the digits of the number is: " << b;
    return 0;
}

int func (int a , int i) {
    int count=0;
    if (i == 0) {
        return count;
    }
    if (i > a) {
         count = count + 1;
         func(a, i +1);
    }
}