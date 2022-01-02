#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t ,arr[3];
    cin>>t;
    while (t--)
    {
        cin>>arr[0]>>arr[1]>>arr[2];
        sort(arr,arr+3);
        if(arr[2]!=arr[1]){
            cout<<"NO"<<"\n";
        }else{
            cout<<"YES"<<"\n"<<arr[2]<<" "<<arr[0]<<" "<<1<<"\n";
        }
    }
    

    return 0;
}