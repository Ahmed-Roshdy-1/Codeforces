#include <iostream>
#include <bits\stdc++.h>
using namespace std;
int main(){
    int t,sum1=0,sum2=0;
    cin>>t;
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        cin>>arr[i];
    }
    
    
    int l=0,r=t-1,flage=1;
    while (l<=r)
    {
        if(flage==1){
            sum1+=max(arr[l],arr[r]);
        }else{
            sum2+=max(arr[l],arr[r]);
        }

        arr[l]>arr[r]? l++:r--;
        flage=-flage;

    }
    

    cout<<sum1<<" "<<sum2;
    
    return 0;
}