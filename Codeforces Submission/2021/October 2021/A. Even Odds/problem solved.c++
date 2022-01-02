#include <iostream>

#include <bits/stdc++.h>

using namespace std;


int main(){
    long long n,k;
    cin>>n>>k;
    n=(n+1)/2;
    if(k<=n){
        k=k*2-1;
    }else{
        k=(k-n)*2;
    }
    cout<<k;

    
    

    
    return 0;
}