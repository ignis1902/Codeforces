#include <bits/stdc++.h>
using namespace std;

int main()
{

    int x;
    cin >> x;
    int ans = 0;
    int rem = 0;

    for (int i = 5; i > 0; i--)
    {

        ans += x / i;
        x = x % i;
    }

    cout << ans;

    return 0;
}
