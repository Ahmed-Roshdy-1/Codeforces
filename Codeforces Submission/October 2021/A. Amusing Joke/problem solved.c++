#include <iostream>

#include <bits/stdc++.h>

using namespace std;

int main(){
    string x,y,z,a;
    cin>>x>>y>>z;
    a=x+y;
    sort(a.begin(),a.end());
    sort(z.begin(),z.end());
    

    a==z ? cout<<"YES":cout<<"NO";
    
    
    
   
    return 0;
}