#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        int n,s,x;
        cin>>n>>s>>x;
 
        vector<int>b(n);
        bool value=true;
 
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
 
        int c=accumulate(b.begin(),b.end(),0);
 
        if((s-c)%x==0 && (s-c)>=0){
            value = true;
        }
        else{
            value = false;
        }
 
        if(value==true){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
 
    return 0;
}