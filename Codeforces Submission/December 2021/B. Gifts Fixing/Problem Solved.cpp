#include <iostream>
#include <bits\stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while (t--)
  {
    int n;
    cin>>n;
    long long a[n],b[n],x,y,s=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        x=min(x,a[i]);
    }
    x=*min_element(a,a+n);
    for(int i=0;i<n;i++){
        cin>>b[i];
       
    }
     y=*min_element(b,b+n);
    for(int i=0;i<n;i++){ s=s+max(a[i]-x,b[i]-y);}

    cout<<s<<"\n";
    
    
    
    
  }
  
    
    return 0;
}