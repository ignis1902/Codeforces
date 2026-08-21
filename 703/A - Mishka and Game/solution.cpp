#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    int count=0;
    int ans=0;
    
    while(t--) {
        int a; 
        int b; 
        cin>>a>>b; 
        if(a>b){
            count++;
        }
        else if(b>a){
            ans++;
        }
       
        
    }
    if(count>ans){ cout<<"Mishka";}
    else if(count<ans) { cout<<"Chris";}
    else { cout<< "Friendship is magic!^^";
    }
    
    return 0; 
}