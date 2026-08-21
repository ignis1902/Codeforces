#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int p;
    int q;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> p;
        cin >> q;

        if (q - p > 1)
        {
            count++;
        }
    }

    cout << count;

    return 0;
}