#include <iostream>
#include <bits\stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
       int n,count=0;
       cin>>n;
       while (n%6==0)
       {
          n=n/6;
          count++;
       }
       while (n%3==0)
       {
          n=n/3;
          count+=2;
       }
       
       if(n!=1) count=-1;
       
       cout<<count<<"\n";

        
    }
    return 0;
}