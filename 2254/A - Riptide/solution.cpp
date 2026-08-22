#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    
    while (t--){
        int a,b,c;
        cin>>a>>b>>c;
        
        if(a==b || b==c || a==c){
            cout<<0<<endl;
            continue;
            
        }
        
        int arr[3] = {a,b,c};
        sort(arr,arr+3);
        int count=0;
        while(arr[0]!=arr[1] && arr[1]!=arr[2] && arr[0] != arr[2]) {
            
            arr[2]--;
            arr[0]++;
            count++;
            sort(arr,arr+3);
            
        }
        
        
         cout<<count<<endl;
        
    }
    
    
    
   
    
    return 0;
}