#include <iostream>
#include <bits\stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
       int n,a=0,b=0;
       cin>>n;

       while (n--)
       {
           int k;
           cin>>k;
           k==1?  a++:b++;
       }
       cout << ((a%2 || (b%2 && a<2))?"NO":"YES") << endl;
        
    }
    

    return 0;
}