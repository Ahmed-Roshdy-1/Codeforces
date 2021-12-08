#include <iostream>
#include <bits\stdc++.h>

using namespace std;

int main(){
    int t,c1=0,c2=0;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        if(n%4==0){
            cout<<"YES"<<"\n";
            for (int i = 1; i <= n/2; i++)
            {
                cout<<i*2<<' ';
            }
            for (int i = 1; i < n/2; i++)
            {
                cout<<i*2-1<<' ';
            }
            cout<<n+n/2-1<<"\n";
            
        }else{
            cout<<"NO"<<"\n";
        }
    }
    

    return 0;
}