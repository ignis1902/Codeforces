#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        int a; int b;
        cin>>a>>b;
        int ans=a/2+b;
        if(ans<=n){
        
        cout<<ans<<endl;
        }
        else {
            cout<<n<<endl;
        }
        
        
        
        
    }
    return 0;
}