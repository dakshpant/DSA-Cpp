#include <iostream>
using namespace std;
int main()
{
    int n, i, fact;
    /*
    factorial N! = N*N-1* ---- N-n
    */
    cout << "Enter The Number";
    cin >> n;
    fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << fact;
}