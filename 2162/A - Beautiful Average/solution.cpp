#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        int a[n];
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        sort(a, a + n);
 
        double total = accumulate(a, a + n, 0);
        double avg = total / n;
        double max_avg = avg;
 
        for (int i = 0; i < n - 1; i++) {
 
            total = total - a[i];
 
            avg = total / (n - 1 - i);
 
            if (avg > max_avg) {
                max_avg = avg;
            }
        }
 
        cout << max_avg << endl;
    }
 
    return 0;
}