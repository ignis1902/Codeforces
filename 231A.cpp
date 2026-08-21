#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 0;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a;
        int b;
        int c;
        cin >> a >> b >> c;
        if (a + b + c == 2 || a + b + c == 3)
        {
            count++;
        }
    }

    cout << count;

    return 0;
}
