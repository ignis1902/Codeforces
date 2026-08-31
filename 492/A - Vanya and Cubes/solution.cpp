#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;
 
    int count = 0;
    int ans = 0;
    int total = 0;
 
    for(int i = 1; ; i++){
        ans += i;              // 1, 3, 6, 10, 15...
        
        if(total + ans > n){
            break;
        }
 
        total += ans;
        count++;
    }
 
    cout << count;
 
    return 0;
}