#include <iostream>
using namespace std;

bool armstrong(int num, int digit)
{
    int n = num, ans = 0, rem;
    while (n)
    {
        rem = n % 10;
        n /= 10;
        ans = ans + pow(rem, digit);
    }
    if (ans == num)
    {
        return 1;
    }

    return 0; 
}

int countdigit(int n)
{
    int count = 0;
    while (n)
    {
        count++;
        n /= 10;
    }
    return count;
}

int main()
{
    int num;
    cout << "Enter the number:";
    cin >> num;
    int digit = countdigit(num);
    cout << armstrong(num, digit);

    return 0;
}