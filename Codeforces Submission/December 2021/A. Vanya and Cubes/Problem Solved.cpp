#include <iostream>
#include <bits\stdc++.h>
using namespace std;
int main(){
  int n,i,a=0,c=0;
  cin>>n;
  for (i = 1; c <= n; i++)
  {
      a+=i; c+=a;
  }
  cout<<i-2;
  
    
    return 0;
}