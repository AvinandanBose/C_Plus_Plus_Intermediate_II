//Array of Pointers 
#include <iostream>
using namespace std;
int main()
{
    
    int m;
    cout << "Enter the size of the array" << endl;
    cin >> m;
    int a[m];
    int(*ptr)[m];
    ptr = &a;
    cout << "Enter the elements in 1D  Array" << endl;
    for (int i = 0; i < m; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> *((*ptr)+i);
    }
    

    cout << "The elements in the 1D Array are:" ;
    for (int i = 0; i < m; i++)
    {
        cout << *((*ptr) + i) << " ";
    }

    

    return 0;
}