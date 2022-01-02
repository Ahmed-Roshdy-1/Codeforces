#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cctype>

using namespace std;

int main(){
    int n,c1=0,c2=0,e=0,o=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            c1++;
            e=i+1;
        }else{
            c2++;
            o=i+1;
        }
    }
    c1>c2? cout<<o : cout<<e;

    
    

    return 0;
}