#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;
    int a[n],totalsum=0,sum=0,count=0;
    
    
   for(int i=0;i<n;i++){
       cin>>a[i];
      totalsum +=a[i];
       
   }
   int half=totalsum/2;
   sort(a,a+n);
   for(int i=n-1;i>=0;i--){
       sum +=a[i];
       count++;
       if(sum>half){
           break;
       }
   }
   cout<<count;
   
    return 0;
}