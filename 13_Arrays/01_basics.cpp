#include <iostream>
using namespace std;
int main(){
    int arr[10];
    for (int i=0;i<=10;i++){
        cin>>arr[i];
    }
    cout<<arr;
    // Address of index
    /*
    arr = [8,10,12,4,7]
    AddressOfIndex = arr+index*sizeOfDataType
    */
   /*
   size of DataTypes
   int=4
   char and bool = 1
   short = 4;
   long = 8(lyinux/mac)
          4 (Windows x86-64)
    long long = 8      
   */
    return 0;
}