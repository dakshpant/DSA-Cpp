#include <iostream>
using namespace std;
int main()
{
    int r, c, n;
    cout<<"Enter The number:";
    cin>>n;
    for(r=n;r>=1;r--){
        for(c=1;c<=n-r;c++){
            cout<<"  ";
        }
        for(c=1;c<=2*r-1;c++){
            cout<<"* ";
        }
        cout<<endl;
    }


    // Method2
    // for(r=1;r<=n;r++){
    //     for(c=1;c<=r-1;c++){
    //         cout<<"  ";
    //     }
    //     for(c=1;c<=2*r-1;c++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}