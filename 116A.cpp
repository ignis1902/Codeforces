#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int a;
    int b;
    int maxValue = 0;

    cin >> n;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {

        cin >> a;
        cin >> b;

        ans += b - a;

        if (ans > maxValue)
        {
            maxValue = ans;
        }
    }

    cout << maxValue;

    return 0;
}