#include <iostream>
using namespace std;
// call by value
void callByValueSwap(int a, int b)
{
    int c;
    c = a;
    a = b;
    b = c;
    //it wont swap cuz in call by value both the parameters has its own storage i.e stored in diff value spaces 
}
//Call by reference'
void callByReferenceSwap(int &a, int &b){
    int c;
    c = a;
    a = b;
    b = c;
}

int main()
{
    int a, b;
    cin >> a >> b;

    callByValueSwap(a,b);
    cout<<"call By value Swap"<<a <<b<<endl;
    callByReferenceSwap(a, b);
    cout<<"Call By Reference Swap" << a << b;

    return 0;
}