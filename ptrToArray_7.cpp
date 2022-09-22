#include <iostream>
using namespace std;
int main()
{
    int a[2][2] = {{1, 2}, {3, 4}};
    int *p = (int *)a;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cout << *(p + i * 2 + j) << endl;
        }
    }
    return 0;
}