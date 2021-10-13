#include <iostream>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll max(ll x,ll y) { if(x>y) {return x;}else{return y;}}
ll min(ll x,ll y) { if(x<y) {return x;}else{return y;}}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        ll  a,b,c,val1,val2,val3;
        cin>>a>>b>>c;
        if(a==b&&b==c){
            cout<<1<<" "<<1<<" "<<1<<"\n";
        }else{
            val1=max(b,c)+1 -a;
            val2=max(a,c)+1-b;
            val3=max(b,a)+1-c;

            val1<0? cout<<0<<" ": cout<<val1<<" ";
            val2<0? cout<<0<<" ": cout<<val2<<" ";
            val3<0? cout<<0<<" ": cout<<val3<<"\n";
            
            
        }
        

        
    }
    
    


    return 0;
}