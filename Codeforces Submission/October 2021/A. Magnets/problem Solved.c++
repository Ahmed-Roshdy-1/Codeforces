#include <iostream>

#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n ,count=1;
    cin>>n;
    int t[n];
   
    for(int i=0;i<n;i++){
        cin>>t[i];
    }
   
    for(int j=0;j<n-1;j++){
        if(t[j]!=t[j+1]){
            count++;
        }
   
    }
    cout<<count;
    




    return 0;
}