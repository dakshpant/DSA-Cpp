#include <iostream>
using namespace std;
int main()
{
    int r, c;

    /*
     for(r=5;r>=1;r--){
        for(c=1;c<=r;c++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    */
    //    method 2
    char star;
    for (r = 1; r <= 5; r++)
    {
        
        for (c = 1; c <= 5-(r-1); c++)
        {
            star='*';
            cout << star <<" ";
        }
        cout << endl;
    }

    return 0;
}