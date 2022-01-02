#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;
    int arr[t],a1[5000],a2[5000],a3[5000],i1=0,i2=0,i3=0;
    
    for (int i = 0; i < t; i++)
    {
        cin>>arr[i];
        if(arr[i]==1){
            a1[i1]=i;
            i1++;
         
        }
        if(arr[i]==2){
            a2[i2]=i;
            i2++;
             
        }
        if(arr[i]==3){
            a3[i3]=i;
            i3++;
           
        }
    }
    int w=min(i1,min(i2,i3));
    cout<<w<<"\n";
    for (int i = 0; i < w; i++)
    {
        cout<<a1[i]+1<<" "<<a2[i]+1<<" "<<a3[i]+1<<" "<<"\n";
    }
    

    


    return 0;
}