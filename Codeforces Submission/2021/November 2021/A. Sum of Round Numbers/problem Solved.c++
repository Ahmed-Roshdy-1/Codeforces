#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,arr[6],c=0,k=1;
        cin>>n;
        for(int i=0;n;i++){
            int temp;
            temp=n%10;
            n=n/10;
            if(temp>0){
                arr[c]=temp*k;
                c++;
            }
            k=k*10;
        }

        cout<<c<<"\n";
        for (int i = 0; i <c; i++)
        {
            cout<<arr[i]<<" ";
        }
        
    }
    
    
    
    return 0;
}