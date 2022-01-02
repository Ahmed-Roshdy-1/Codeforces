#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    while (n--)
    {
        long long a,b,c,count=0;
        cin>>a>>b;
        c=abs(a-b);
        if(c%10!=0){
            cout<<c/10+1<<"\n";
        }else{
            cout<<c/10<<"\n";
        }
        
    }
    return 0;
}