#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    
    while(t--){
        int a;int b; int c;
        cin>>a>>b>>c;
        
        int n[3] = {a,b,c} ;
        sort(n,n+3);
        if(n[0]+n[1]==n[2]){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        
        
        
        
    }
    
    
    
    
    
    return 0;
}