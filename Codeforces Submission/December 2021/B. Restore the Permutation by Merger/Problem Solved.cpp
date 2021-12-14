#include <iostream>
#include <bits\stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while (t--)
  {
      int n,v;
      cin>>n;
    vector<bool> b(n+1);
    for (int i = 0; i < 2*n; i++)
    {
        cin>>v;
        if(!b[v]) cout<<v<<" ";
        b[v]=true;
    }
    cout<<endl;
    
    
  }
  
    
    return 0;
}