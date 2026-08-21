#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int count = 0;
    int ans;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            count++;
        }
    }

    ans = s.size() - count;
    for (int i = 0; i < s.size(); i++)
    {
        if (ans > count)
        {
            s[i] = toupper(s[i]);
        }
        else if (count >= ans)
        {
            s[i] = tolower(s[i]);
        }
    }

    cout << s;

    return 0;
}