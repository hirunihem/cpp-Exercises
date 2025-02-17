// Q : read 2 arrays of size 5 and store sum of these arrays in to a third array.

#include <iostream>
using namespace std;

int main()
{
   int i;
   int array1[5],array2[5],s[5];

   cout << "enter (1) " << endl;  // Input array1
   for(i=0;i<5;i++) 
   {
       cin >> array1[i];
   }
  
   cout << "enter (2)" << endl;  // Input array2
   for(i=0;i<5;i++)
   {
       cin >> array2[i];
   }
  
    for(i=0;i<5;i++)    // Add corresponding elements of array1 and array2
    {
         s[i]=array1[i]+array2[i];
    }
    cout << "SUM" << endl;  // Output the sum
    for(i=0;i<5;i++)
    {
         cout << s[i] << "  ";
    }
    return 0;
}
