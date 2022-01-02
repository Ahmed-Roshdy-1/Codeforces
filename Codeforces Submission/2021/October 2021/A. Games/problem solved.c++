#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,count=0;
    cin>>n;
    int arr1[n],arr2[n];
    for (int i = 0; i < n; i++)
    {
        int h,a;
        cin>>h>>a;
        arr1[i]=h;
        arr2[i]=a;

    }
    for(int i=0;i<n;i++){
        for (int j = 0; j < n; j++)
        {
            if(arr1[i]==arr2[j]){
                count++;
            }
        }
        
    }

    cout<<count;
    
    

    return 0;
}