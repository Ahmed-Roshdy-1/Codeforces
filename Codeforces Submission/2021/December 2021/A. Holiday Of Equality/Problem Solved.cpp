#include <iostream>
#include <iostream>
#include <bits\stdc++.h>
using namespace std;
int main(){
  int t,sum=0;
  cin>>t;
  int a[t];
  for(int i=0;i<t;i++){
      cin>>a[i];
  }
  sort(a,a+t);
  for(int i=0;i<t-1;i++){
     sum+=(a[t-1]-a[i]);
  }
  cout<<sum<<"\n";
  
    
    return 0;
}