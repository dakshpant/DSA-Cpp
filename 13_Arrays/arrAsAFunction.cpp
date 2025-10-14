#include <iostream>
using namespace std;
void fun(int a[],int n){
    for(int i =0; i<n; i++ ){
        cout<<a[i]<<" ";
    }
}
int main(){
    int arr[5]={1,3,5,56,5};
    fun(arr,5);
    return 0;
}