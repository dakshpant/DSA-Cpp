#include <iostream>
using namespace std;
int sum(int a, int b)
{
    return a + b;
}
bool isPrime(int a)
{
    if (a < 2)
        return 0;
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int fact(int a)
{
    int ans = 1;
    for (int i = 1; i < a; i++)
    {
        ans = ans * i;
    }
    return ans;
}
int main()
{
    cout << sum(9, 10);
    cout<<endl;
    // isPrime 
    cout << isPrime(2 );
    return 0;
}
