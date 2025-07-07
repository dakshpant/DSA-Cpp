#include <iostream>
using namespace std;
int main()
{

    // for (int i = 0; i < 5; i++)
    // {
    //     for (int i = 0; i < 5; i++)
    //     {
    //         /* code */
    //         cout << "*" << " ";
    //     }
    //     cout<<endl;
    // }
   
    int row,i,col;

    for(row=1; row<=5; row++){
        
        cout<<endl;
        for (col = 1; col<=5; col++)
        {
            cout<<"*"<<" ";
        }
    }


    return 0;
}