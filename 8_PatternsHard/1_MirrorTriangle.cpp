#include <iostream>
using namespace std;
int main()
{
    /*  
q:      *
       **
      ***
     ****
    *****
    */
    int r, c, n;
    cout<<"Enter The number:";
    cin>>n;
    for (r = 1; r <= n; r++)
    {
        for (c = 1; c <= (n - r); c++)
        {
            cout << " ";
        }
        for (c = 1; c <= r; c++)
        {
            cout << '*';
        }
        cout << endl;
    }
    return 0;
}