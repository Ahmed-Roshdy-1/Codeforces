#include <iostream>
#include <bits\stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while (t--)
  {
    int a,b,c,n;
    cin>>a>>b>>c>>n;
    int x=(a+b+c+n)/3;
    if((a+b+c+n)%3==0 && x>=a && x>=b && x>=c){
         cout<<"YES"<<"\n";

    }else{
         cout<<"NO"<<"\n";
        
    }
    
  }
  
    
    return 0;
}