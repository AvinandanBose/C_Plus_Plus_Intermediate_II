#include <iostream>
using namespace std;
int main()
{
    int a[2][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};

    cout << *(*(*a)) << endl; 
    cout << *(*(*(a + 0) + 0) + 0) << endl;
    cout << *(*(*(a + 0) + 0) + 1) << endl;
    cout << *(*(*(a + 0) + 1) + 0) << endl;
    cout << *(*(*(a + 0) + 1) + 1) << endl;
    cout << *(*(*(a + 1) + 0) + 0) << endl;
    cout << *(*(*(a + 1) + 0) + 1) << endl;
    cout << *(*(*(a + 1) + 0) + 1) << endl;
    cout << *(*(*(a + 1) + 1) + 0) << endl;
    cout << *(*(*(a + 1) + 1) + 1) << endl;
    return 0;
}