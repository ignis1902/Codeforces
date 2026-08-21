#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {

        s[i] = tolower(s[i]);
        if (s[i] == 'a' || s[i] == 'o' || s[i] == 'y' || s[i] == 'e' || s[i] == 'u' || s[i] == 'i')
        {
            s.erase(i, 1);
            i--;
        }
    }
    for (int i = 0; i < s.size(); i++)
    {
        s.insert(i, ".");
        i++;
    }
    cout << s;

    return 0;
}
