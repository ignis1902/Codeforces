#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    string s;
    cin >> s;
    int b;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'A')
        {

            count++;
        }
    }
    b = n - count;

    if (b > count)
    {
        cout << "Danik";
    }
    else if (count > b)
    {
        cout << "Anton";
    }
    else
    {
        cout << "Friendship";
    }
    return 0;
}
