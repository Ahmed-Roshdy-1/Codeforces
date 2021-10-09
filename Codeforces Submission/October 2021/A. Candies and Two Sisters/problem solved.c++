#include <iostream>

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        long long a;
        cin>>a;
        if(a<=2){
            cout<<0<<"\n";
        }else{
            if(a%2==0){
                cout<<a/2-1<<"\n";
            }else{
                cout<<a/2<<"\n";
            }
        }
       
        
    }
   
    return 0;
}