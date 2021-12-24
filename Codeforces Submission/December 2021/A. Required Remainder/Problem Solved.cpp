#include <iostream>
#include <bits\stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while (t--)
  {
    int a,b,c;
    cin>>a>>b>>c;

   
    cout<<c-(c-b)%a<<"\n";
    
    
  }
  
    
    return 0;
}