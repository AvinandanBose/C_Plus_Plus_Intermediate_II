#include <iostream>
using namespace std;
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    cout << *a << endl;
    cout << *(a + 0) << endl;
    cout << *(a + 1) << endl;
    cout << *(a + 2) << endl;
    cout << *(a + 3) << endl;
    return 0;
}