#include <iostream>
using namespace std;

int main()
{
    int i;
    int a[5];

    cout << " Enter 5 Marks" << endl;

    for(i=0;i<5;i++)
    {
        cin >> a[i];
    }

     for(i=0;i<5;i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}
