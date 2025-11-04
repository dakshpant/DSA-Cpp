#include <iostream>
using namespace std;
int main()
{
    // Selection Sort Time Complexity : O(n^2)
    int arr[1000];
    cout<<"ENter Size Of Arr:";
    int n;
    cin >> n;//size OF Arr
    cout<<"Enter Arr Elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        int bigInt = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[bigInt])
            {
                bigInt = j;
            }
        }
        swap(arr[i], arr[bigInt]);
    }

    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}