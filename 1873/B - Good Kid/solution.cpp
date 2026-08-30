#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
 
        vector<int> a(n);
 
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
 
        int mini = *min_element(a.begin(), a.end());
 
        int pos = min_element(a.begin(), a.end()) - a.begin();
 
        a[pos] = mini + 1;
 
        long long product = 1;
 
        for(int i = 0; i < n; i++){
            product *= a[i];
        }
 
        cout << product << endl;
    }
 
    return 0;
}