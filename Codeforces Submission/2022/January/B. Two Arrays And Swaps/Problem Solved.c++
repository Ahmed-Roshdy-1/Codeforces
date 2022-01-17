#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    while (n--)
    {
       int t,k,ans=0;
       cin>>t>>k;
       int b[t],a[t];
       for(int i=0;i<t;i++){
           cin>>a[i];
       }
       for(int i=0;i<t;i++){
           cin>>b[i];
       }
       sort(a,a+t);
       sort(b,b+t);
       int x=t;
       
       for(int i=0;i<k;i++){
           if(a[i]>=b[x-1]){
               break;

           }else{

           
           a[i]=b[x-1];
         
           x--;
           }
       }
    
       for(int i=0;i< t;i++){
           
           ans=ans+a[i];
         

       }

        cout<<ans<<"\n";
    }
   
    


    return 0;
}