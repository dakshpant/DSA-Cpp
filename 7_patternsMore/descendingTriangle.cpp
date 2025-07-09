#include <iostream>
using namespace std;
int main()
{
    int r, c;
    for(r=1; r<=5; r++){
        for(c=5; c>=5-(r-1); c--){
            cout<<c<<" ";
        }
        cout<<endl;
    }
    return 0;
}