#include <iostream>
#include <bits\stdc++.h>
using namespace std;
int main(){
    int t,sum1=0,sum2=0;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
              cin>>arr[i];
        }
        sort(arr,arr+n);
        int m=999;

         for (int i = 0; i<n-1; i++)
         {
             m=min(m,arr[i+1]-arr[i]);
         }
         cout<<m<<"\n";
         
    }
    
    
    
    
    

    
    
    return 0;
}