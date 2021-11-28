#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;
    while (t--)
    {
        int isOk=1,n;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
           cin>>a[i];
        }
        sort(a,a+n);
        for (int i = 1; i < n; i++) if(a[i]-a[i-1]>1) {isOk=0; break;}
        puts(isOk? "YES":"NO");
        
        
    }
    

    

    return 0;
}