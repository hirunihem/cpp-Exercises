#include <iostream>
using namespace std;

int main()
{
    int i;
    int R[5];
    cout << "ENTER 5 DIGITS" << endl;

    for(i=0;i<5;i++)
    {
        cin >> R[i];
    }
  
    for(i=4;i>=0;i--) //reverse order
    {
        cout << R[i] << "  ";
    }

    return 0;
}
