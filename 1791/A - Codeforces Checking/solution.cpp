#include<bits/stdc++.h>
using namespace std;
 
int main(){
   int t;
   cin>>t;
  
   while(t--){
      string s="codeforces";
      char c;
      cin>>c;
 
      bool found=false;
    
      for(int i=0;i<s.size();i++){
         if(c==s[i]){
            found=true;
            break;
         }
      }
 
      if(found){
         cout<<"yes"<<endl;
      }
      else{
         cout<<"no"<<endl;
      }
   }
 
   return 0;
}