#include <iostream>
using namespace std;
int main()
{
    int r, c, n;
    cout << "Enter The Input Number:";
    cin >> n;
    for (r = 1; r <= n; r++)
    {
        for (c = 1; c <= (n - r); c++)
        {
            cout << " ";
        }
        for (c = 1; c <= r; c++)
        {
            cout << r << "";
        }
        cout << endl;
    }
    return 0;
}