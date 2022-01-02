#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,m,x,p=1,sum=0;

    cin>>n>>m;
    while (m--)
    {
        cin>>x;
        if(p<=x){
          sum=sum+(x-p);
        }else{
            sum=sum+((n-p)+(x));
        }
        p=x;
    }

    cout<<sum;
    

    return 0;
}