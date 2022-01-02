#include<iostream>
#include <bits/stdc++.h>


using namespace std;

int main(){

   int a[5],k=0;string s;
   cin>>a[1]>>a[2]>>a[3]>>a[4]>>s;
    for(int i=0;i<s.length();i++){
        k+=a[s[i]-48];
    }
    cout<<k;

    return 0;
}