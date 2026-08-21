#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        int a = s.size() - 2;
        if (s.size() > 10)
        {
            cout << s[0] << a << s.back() << endl;
        }

        else
        {
            cout << s << endl;
        }
    }

    return 0;
}