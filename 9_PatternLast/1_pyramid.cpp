#include <iostream>
using namespace std;
int main()
{
    int r, c, n;
    for(r=1;r<=5;r++){
        for(c=1;c<=5-r;c++){
            cout<<" ";
        }
        for(c=1;c<=2*r-1;c++){
            cout<<"*";
        }
        cout<<endl;
    }
// If we want stars in between spaces
    // for(r=1;r<=5;r++){
    //     for (c = 1; c <= 5-r; c++)
    //     {
    //         cout<<" ";
    //     }
    //     for(c=1;c<=r;c++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }

    return 0;
}