#include <iostream>
#include <bits/stdc++.h>


using namespace std;



int main(){

    int n,max,min,max_value=0,min_value=101;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]>max_value){
            max=i;
            max_value=a[i];
        }
        if(a[i]<=min_value){
           min=i;
           min_value=a[i];
        }
    }
    
    

    
    max>min?  cout<<(max-1)+(n-min)-1:cout<<(max-1)+(n-min);



    return 0;
}