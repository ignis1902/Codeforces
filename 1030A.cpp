#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a;

        if (a == 1)
        {
            count++;
        }
    }

    if (count > 0)
    {
        cout << "HARD";
    }
    else
    {
        cout << "EASY";
    }

    return 0;
}