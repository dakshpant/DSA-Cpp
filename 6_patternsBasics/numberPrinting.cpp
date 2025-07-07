#include <iostream>
using namespace std;
int main()
{
    int r, c;
    int count = 1;
    for (r = 1; r <= 5; r++)
    {
        // Approach 1
        // for (c = 1; c <= 5; c++)
        // {
        //     cout << count << " ";
        //     count++;
        // }
        // approch2
        for (c = 1; c <= 5; c++)
        {
            cout << (r - 1) * 5 + c << " ";
        }

        cout << endl;
    }

    return 0;
}