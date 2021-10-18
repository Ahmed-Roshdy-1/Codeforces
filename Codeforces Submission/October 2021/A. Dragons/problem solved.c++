#include <iostream>
#include <bits/stdc++.h>


using namespace std;

int main(){
    int s,n;
    cin>>s>>n;
    pair <int,int> arr[1000];
    for (int i = 0; i < n; i++)
    {
        
        cin>>arr[i].first>>arr[i].second;
        
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(s>arr[i].first){
            s=s+arr[i].second;
        }else{
            s=0;
            break;
        }
    }

    if(s!=0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    
    


    return 0;
}