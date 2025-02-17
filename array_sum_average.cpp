#include <iostream>
using namespace std;

int main()
{
    int i,s,A;
    s=0;

    int a[5];  //creating array
    
    cout << " Enter 5 Marks" << endl; //input 5 marks

    for(i=0;i<5;i++)
    {
        cin >> a[i];
    }

    for(i=0;i<5;i++)  //calculating sum of marks
    {
        s=s+a[i];
    }
    cout << s << endl;
     A=s/5;     //calculate average
    cout << A;


    return 0;
}
