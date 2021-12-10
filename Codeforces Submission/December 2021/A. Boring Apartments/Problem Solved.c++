#include <iostream>
#include <bits\stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
       int n,ans,count=0;
       cin>>n;
       int c=n%10;
       ans=(c-1)*10;
       while (n%10)
       {
           count++;
           n=n/10;
           ans=ans+count*1;
       }
       cout<<ans<<"\n";
        
    }
    return 0;
}