#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while (t--)
    {
        int n,ans=1;
        cin>>n;
       int a[n];
       for(int i=0;i<n;i++){
             cin>>a[i];
        }

       if(a[0]==a[1]){
           ans=ans+2;
           for(int i=1;i<n;i++){
               if(a[i]==a[i+1]){
                   ans++;
               }else{
                   break;
               }
           }

       }else{
           if(a[0]==a[2]){
               ans=2;
           }else{
               ans=1;
           }
       }

       cout<<ans<<"\n";

       
    }

    return 0;
}