#include <iostream>
using namespace std;
int main(){
    int r, c;
    for(r=1;r<=5;r++){
        for(c=1;c<=(5-r);c++){
            cout<<" ";
        }
        for (c = 1; c <= r; c++)
        {
           char alpha = 'A'+(c-1);
           cout<<alpha;
        }
        cout<<endl;
    }
    return 0;
}