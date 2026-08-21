#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long m;
    cin >> m;
    long long n;
    cin >> n;
    long long a;
    cin >> a;
    if (m % a == 0 && n % a == 0)
    {
        cout << (n / a) * (m / a);
    }
    else if (m % a == 0 && n % a != 0)
    {
        cout << (m / a) * (n / a + 1);
    }
    else if (m % a != 0 && n % a == 0)
    {
        cout << (m / a + 1) * (n / a);
    }
    else
    {
        cout << (m / a + 1) * (n / a + 1);
        ;
    }

    return 0;
}
