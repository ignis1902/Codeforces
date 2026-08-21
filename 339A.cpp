#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;
    string b;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != '+')
        {
            b.push_back(a[i]);
        }
    }

    sort(b.begin(), b.end());

    for (int i = 1; i < b.size(); i += 2)
    {
        b.insert(i, "+");
    }
    cout << b;
    return 0;
}