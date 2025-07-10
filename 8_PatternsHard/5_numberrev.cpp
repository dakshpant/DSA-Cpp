#include <iostream>
using namespace std;
int main()
{
    int r, c;
    for (r = 1; r <= 5; r++)
    {
        for (c = 1; c <= (r-1); c++)
        {
            cout << " ";
        }
        for (c = 1; c <= 6-r; c++)
        {
            cout << r ;
        }
        cout << endl;
    }
    return 0;
}