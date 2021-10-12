#include <iostream>
#include <bits/stdc++.h>


using namespace std;

int main(){
    int n,c=0 , max=0,min=10001;;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
       cin>>x;
       if(i==0){
           min=x;
           max=x;
       }
       if(min>x && i!=0){
           min=x;
           c++;
       }
       if(max<x){
           max=x;
           c++;
       }
        
    }
    cout<<c<<"\n";
    
    
    
   
    
    

    return 0;
}