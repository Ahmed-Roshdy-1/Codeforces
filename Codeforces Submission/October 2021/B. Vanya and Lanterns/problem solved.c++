#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,l;
    bool flage=false,flage1=false;
    cin>>n>>l;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==0){
            flage=true;
        }
        if(arr[i]==l){
            flage1=true;
        }
    }
    sort(arr,arr+n);
    
    int mx=-1;
    for(int i=1;i<n;i++){
        mx=max(mx,arr[i]-arr[i-1]);

    }
    long double ans=(long double)mx/2.0;
    if(!flage1)  ans=max(ans,(long double)(l-arr[n-1]));
    if(!flage)  ans=max(ans,(long double)arr[0]);

    cout<<fixed<<ans;

   
    

    return 0;
}