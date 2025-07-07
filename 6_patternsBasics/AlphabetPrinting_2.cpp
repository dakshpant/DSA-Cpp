#include <iostream>
using namespace std;
int main()
{
    // Printing Column
    // Method 1
    for (int r = 1; r <= 5; r++)
    {
        
        for (int c = 1; c <= 5; c++)
        {
            char name = 'a' + (c - 1);
            cout << name << " ";
        }
        cout << endl;
    }

    cout<<endl;

    // Method 2
    for(int r=1; r<=5; r++){
        for (char c = 'a'; c <='e'; c++)
        {
            cout<<c<<" ";
        }
        cout<<endl;
    }
    return 0;
}