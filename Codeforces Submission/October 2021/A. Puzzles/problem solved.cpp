#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;
using namespace std;
ll min(ll x,ll y) { if(x<y) {return x;}else{return y;}}
int main(){
    int n,m;
    cin>>n>>m;
    int arr[m];
    for (int i = 0; i < m; i++){cin>>arr[i];}   
    sort(arr,arr+m);
    int s=arr[m-1]-arr[0];
       
    for(int i=0;i+n-1<m;i++){
        s=min(s,arr[i+n-1]-arr[i]);
    }
    cout<<s<<endl;
    
    
    return 0;
}