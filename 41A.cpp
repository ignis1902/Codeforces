#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    string t;
    cin >> s >> t;

    bool adesh = true;

    if (s.size() != t.size())
    {
        adesh = false;
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != t[t.size() - 1 - i])
            {
                adesh = false;
                break;
            }
        }
    }

    if (adesh)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}