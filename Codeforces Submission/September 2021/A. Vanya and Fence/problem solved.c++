#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,a,count=0;
    cin>>n>>a;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
        arr[i]>a ?  count+=2:count++;
    }
    cout<<count;
    

    
    

    return 0;
}