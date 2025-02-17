#include <iostream>

using namespace std;

int myfunction(int x,int y)
{
    cout << " Answer: " << x*y;
    return (x*y);
}

int main()
{
    int x,y;
    cout << " X: ";
    cin >> x;
    cout << " Y: ";
    cin >> y;
    myfunction(x,y);
    return 0;
}

