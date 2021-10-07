#include <iostream>

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,count=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]<97){
            s[i]=s[i]+32;
            
        }
    }
    sort(s.begin(),s.end());
    for(int i=0;i<n;i++){
        if(s[i]!=s[i+1]){
            count++;
        }
    }
    count == 26 ? cout<<"YES":cout<<"NO";
   
    return 0;
}