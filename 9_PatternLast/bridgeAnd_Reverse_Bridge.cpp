#include <iostream>
using namespace std;
int main()
{
    //  *      *
    //  **    **
    //  ********
    //  ***  ***
    //  ***  ***
    //  **    **
    //  *      *
    
    int r, c, n;
    cout << "Enter The Number:";
    cin >> n;
    for (r = 1; r <= n; r++)
    {
        for (c = 1; c <= r; c++)
        {
            cout << "*";
        }
        for (c = 1; c <= (2 * n) - (2 * r); c++)
        {
            cout << " ";
        }
        for (c = 1; c <= r; c++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (r = n - 1; r >= 1; r--)
    {
        for (c = 1; c <= r; c++)
        {
            cout << "*";
        }
        for (c = 1; c <= 2 * n - (2 * r); c++)
        {
            cout << " ";
        }
        for (c = 1; c <= r; c++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}