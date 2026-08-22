#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    
    while(n--){
        int a;
        int b;
        int c;
        cin>>a>>b>>c;
        int arr[]={a,b,c};
        sort(arr,arr+3);
        if(arr[0]+arr[1]>arr[2]){
            cout<<arr[2]-arr[0]<<endl;
        }
        else if (arr[0]+arr[1]<=arr[2]){
            cout<<arr[1]<<endl;
        }
    }
    return 0;
}