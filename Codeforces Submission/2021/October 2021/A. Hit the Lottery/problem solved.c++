#include <iostream>

#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n,c=0;
    cin>>n;
    while (n)
    {
        if(n/100>=1){
          n=n-100;
          c++;
        }else if(n/20>=1){
            n=n-20;
            c++;
        }else if(n/10>=1){
            n=n-10;
            c++;
        }else if(n/5>=1){
            n=n-5;
            c++;
        }else{
            n--;
            c++;
        }
    }
    cout<<c;
    
    
   
    return 0;
}