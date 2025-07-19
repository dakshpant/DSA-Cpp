#include <iostream>
using namespace std;
int main()
{
/*
* * * *  * * * *
* * *      * * *
* *          * *
*              *
*              *
* *          * *
* * *      * * *
* * * *  * * * *
*/
    int r, c;
    for (r = 4; r >= 1; r--)
    {
        for (c = r; c >= 1; c--)
        {
            cout << "* ";
        }
        for (c = 1; c <= 8 - (2 * r); c++)
        {
            cout << "  ";
        }
        for (c = 1; c <= r; c++)
        {
            cout << " *";
        }
        cout << endl;
    }

    for (r = 1; r <= 4; r++)
    {
        for (c = r; c >= 1; c--)
        {
            cout << "* ";
        }
        for (c = 1; c <= 8 - (2 * r); c++)
        {
            cout << "  ";
        }
        for (c = r; c >= 1; c--)
        {
            cout << " *";
        }
        cout << endl;
    }
    return 0;
}