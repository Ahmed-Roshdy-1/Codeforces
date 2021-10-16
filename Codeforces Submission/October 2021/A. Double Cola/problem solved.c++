#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    string s[6]={"","Sheldon","Leonard","Penny","Rajesh","Howard"};
    while(t>5)
    {
       t=t/2-2;
    }
    cout<<s[t];
    
    return 0;
}