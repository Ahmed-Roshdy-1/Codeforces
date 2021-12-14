#include <iostream>
#include <bits\stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while (t--)
  {
    string n;
    cin>>n;
    cout<<n[0];
    for (int i = 1; i < n.length(); i+=2)
    {
    cout<<n[i];
    }
    cout<<"\n";
    
  }
  
    
    return 0;
}