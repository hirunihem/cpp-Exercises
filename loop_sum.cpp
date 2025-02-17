#include <iostream>

using namespace std;

int main()
{
    int i,x,y;
    cout << "ENTER NUMBER   ";
    cin >> x;
    y=x;

    for(i=1;i<=100;i++)
    {
        x=y+x;
    }
    cout << x;
    return 0;
}
