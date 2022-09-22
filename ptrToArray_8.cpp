#include <iostream>
using namespace std;
int main()
{
    int a[2][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};
    int *p = (int *)a;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                cout << "a[" << i << "][" << j << "][" << k << "] = ";
                cout << *(p + i * 4 + j * 2 + k) << endl;
            }
        }
    }
    return 0;
}

