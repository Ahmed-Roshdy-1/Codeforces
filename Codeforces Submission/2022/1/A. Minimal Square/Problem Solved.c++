#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while (t--)
    {
        int a,b,max_v,min_v,ans;
        cin>>a>>b;
        max_v=max(a,b);
        min_v=min(a,b);
        ans=max(min_v*2,max_v);
        cout<<ans*ans<<"\n";



    }

    return 0;
}