#include <iostream>
using namespace std;
int main()
{
    int a[2][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};
    int *p = (int *)a;
    cout << *p << endl; // → *(p+0) = 1
    cout << *(p + 0) << endl;
    cout << *(p + 1) << endl;
    cout << *(p + 2) << endl;
    cout << *(p + 3) << endl;
    cout << *(p + 4) << endl;
    cout << *(p + 5) << endl;
    cout << *(p + 6) << endl;
    cout << *(p + 7) << endl;
    return 0;
}