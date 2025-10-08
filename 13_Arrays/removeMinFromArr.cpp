#include<iostream>
using namespace std;
int main(){
    int ans = INT_MAX;
    int arr[5]={4,6,10,2,8};
    for(int i= 0; i<=5;i++)
    {
        if (arr[i]<ans)
        {
            ans = arr[i];
        }
    }
    cout<<ans;
    return 0;
}
/*
|||ly; for maxmimu replace int ans = INT_MIN and arr[i]>ans
length of arr = sizeOf(arr)/sizeOf(arr[0]);
*/