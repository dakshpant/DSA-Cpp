#include <iostream>
using namespace std;
int main()
{
    int r, c;
    char name;
    for (r = 1; r <= 5; r++)
    {
        // name='a'+r-1; same either here
        for(c=1;c<=r;c++)
        {
            name='a'+r-1;//or here it means same 
            cout << name << " ";
        }
        cout << endl;
    }
    return 0;
}