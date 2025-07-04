#include <iostream>
using namespace std;
int main()
{
    // Method 1
    /* int n, i;
        cout << "Enter the Multiplicating Factor";
        cin >> n;
        for (i = 1; i <= 10; i++)
        {
            cout << n * i << endl;
        } */
    //    Method 2
    int i,n;
    cout<<"enter The Multiplicating factor";
    cin>>n;
    for(i=n; i<=n*10; i=i+n){
        cout<<i<<' ';
    }
}