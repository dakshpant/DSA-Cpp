#include <iostream>
using namespace std;
int main(){
    int i, n;
    long curr, prev, last;
    cout<<"Enter The Number:";
    cin>>n;
    // 0,1,1,2,3,5,
    if (n<0)
    {
        cout<<"Enter The number again";
        return 0;
    }
    else{
        last = 0;
        prev = 1;
        curr = 1;
    }
    for (i = 2; i < n; i++)
    {
        /* code */
        curr = last+prev;
        last = prev;
        prev=curr;
    }
    cout<<"The answer is"<<curr;
    return 0;
}
