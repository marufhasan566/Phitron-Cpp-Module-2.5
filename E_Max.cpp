#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count;
    cin >> count;
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        cin >> arr[i];
    }
    // Print
    int result = 0;
    for (int i = 0; i < count; i++)
    {
        result = max(arr[i], result);
    }
    cout << result;

    return 0;
}