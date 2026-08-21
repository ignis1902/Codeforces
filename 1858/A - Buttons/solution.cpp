#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    
    while(t--) {
        int a; 
        int b; 
        int c; 
        cin>>a>>b>>c; 
        
        if(b==a){
            if(c%2==0){
            cout<<"Second"<<endl;}
            else{
                cout<<"First"<<endl;
            }
        }
        else if(a>b){
            cout<<"First"<<endl;
        }
        else if(b>a ){
            cout<<"Second"<<endl;
        }
        
    }
    
    return 0; 
}