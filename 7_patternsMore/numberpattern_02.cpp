#include <iostream>
using namespace std;
int main ()
{
    /*
    1 
    2 2
    3 3 3
    4 4 4 4
    5 5 5 5 5
    */
   int r, c;
   for(r=1;r<=5;r++){
    for(c=1;c<=r;c++){
        cout<<r<<" ";
    }
    cout<<endl;
   }
    return 0;
}