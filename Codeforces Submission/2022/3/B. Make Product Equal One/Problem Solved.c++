#include<bits/stdc++.h>

using namespace std;

int main(){
    long long t,ans=0,o=0,c=0;
    cin>>t;
    while (t--)
    {
        long long n;
        cin>>n;
        ans+=abs(abs(n)-1);
        if(n<0)o++;
        if(n==0)c++;
        
    }
    if(o%2 && c==0) ans+=2;
    cout<<ans<<"\n";
    
   
    return 0; 
}