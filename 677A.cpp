#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int h;
    cin >> h;
    int a;
    int width = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a > h)
        {
            width += 2;
        }
        else
        {
            width += 1;
        }
    }

    cout << width;
    return 0;
}