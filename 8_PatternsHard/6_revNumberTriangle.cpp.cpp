#include <iostream>
using namespace std;
int main()
{
    /*
       1
      21
      321
     4321
    54321
    */

    int r, c, n;
    cout<<"Enter The Input Number:";
    cin>>n;
    for(r=1;r<=n;r++){
        for(c=1;c<=n-r;c++){
            cout<<" ";
        }
        for(c=r;c>=1;c--){
            cout<<c<<" ";
        }
        cout<<endl;
    }
    return 0;
}