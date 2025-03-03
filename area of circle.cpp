#include <iostream>

using namespace std;

int main()
{
    float radius,circumference,area;

    cout << "ENTER THE RADIUS" << endl;
    cin >> radius;

    area=3.14*radius*radius;
    circumference=2*3.14*radius;

    cout << "AREA = " << area << "    S = " << circumference;

    return 0;
}
