#include <iostream>
#include <bits\stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while (t--)
  {
    string s;
    cin>>s;
    int  n=s.length();
    if(n%2!=0){
        cout<<"NO"<<"\n";
    }else{
        int c=0,j=n/2;
        for(int i=0;i<n/2;i++){
            
            if(s[i]==s[j]){
                c++;
            
            }
            j++;
       
        }
        
        
    
        c==n/2? cout<<"YES"<<"\n":cout<<"NO"<<"\n";
    
  }
  
  }
    return 0;
}