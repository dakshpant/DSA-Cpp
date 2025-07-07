#include <iostream>
using namespace std;
int main()
{
    int i, n, result;
    cout << "Enter The Number To Check:";
    cin >> n;
    if (n <= 2)
    {
        /* code */
        cout << n << "is Prime";
        return 0;
    }
    else
    {
        for (i = 2; i < n; i++)
        {
            if (n%i == 0)
            {
                /* code */
                cout << n << "is not a prime";
                return 0;
            }
        }
        cout << n << "is Prime";
        return 0;
    }

    return 0;
}