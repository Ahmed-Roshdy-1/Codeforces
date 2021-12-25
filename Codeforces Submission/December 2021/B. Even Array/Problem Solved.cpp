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
    long long a,s1=0,s2=0;
    for(int i=0;i<n;i++){
        cin>>a;
        if(i%2==0 && a%2==1) s1++;
        if(i%2==1 && a%2==0) s2++; 
    }

    if(s1!=s2){
        cout<<-1<<"\n";
    }else{
           cout<<s1<<"\n";
    }
    
    
    
    
    
  }
  
    
    return 0;
}