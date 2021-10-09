#include <iostream>

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,temp=1,max=INT_MIN; 
    cin>>n;
    long long arr[n];
   for (int i = 0; i < n; i++)
   {
       cin>>arr[i];
   }
   if(n==1){
       cout<<"1";
       return 0;
   }
   for (int i = 0; i < n-1; i++)
   {
       if(arr[i]<=arr[i+1]){
           temp++;
       }else{
           temp=1;
       }
       if(max<=temp){
           max=temp;
       }
       
   }
   
   cout<<max;

   
    
    return 0;
}