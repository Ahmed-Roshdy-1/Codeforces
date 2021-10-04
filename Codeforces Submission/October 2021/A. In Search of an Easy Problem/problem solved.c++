#include <iostream>

#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n ,count=0;
    cin>>n;
    int t[n];
   
    for(int i=0;i<n;i++){
        cin>>t[i];
        if(t[i]==1){
            count=1;
            break;
        }
    }
   
    count ? cout<<"HARD" :cout<<"EASY";
    
    




    return 0;
}