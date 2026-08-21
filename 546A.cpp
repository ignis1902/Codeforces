#include <bits/stdc++.h>
using namespace std;

int main()
{

    int k;
    cin >> k;
    int n;
    cin >> n;
    int w;
    cin >> w;
    int ans = 0;
    int b;

    for (int i = 1; i <= w; i++)
    {

        ans += i * k;
    }

    b = ans - n;
    if (b > 0)
    {
        cout << b;
    }
    else
    {
        cout << 0;
    }

    return 0;
}
