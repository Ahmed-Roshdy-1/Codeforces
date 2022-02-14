#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while (t--)
    {
     int n,i;
     cin>>n;
     int a[n+1];
     for (i=1; i <= n; i++)
     {
         cin>>a[i];   
       
     }
     for (i=n-1; i >0; i--)
     {
        a[i]=max(a[i],a[i+1]-1); 
        
       
     }
     for (i=1; i <=n; i++){
        cout<<(a[i]>0)<<" ";  
       
     }
     cout<<endl;

     


       
    }

    return 0;
}