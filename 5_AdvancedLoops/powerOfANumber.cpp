#include <iostream>
using namespace std;

int main()
{
    int i,n,pow;

    cout<<"Enter The Number";
    cin>>n;
    cout<<"Enter The Power factor";
    cin>>pow;

    int num = n;
    for(i=1;i<pow;i++){
        num=num*n;
    }
    cout<<num<<endl;
}