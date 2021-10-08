#include <iostream>

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int a;
        cin>>a;
        long long x[a];
        for (int j = 0; j < a; j++)
        {   
            cin>>x[j];
            
        }
        int f=0,r=a-1;
    
        while (f<=r)
        {
            if(a==1){
                cout<<x[f]<<" ";
                r--;
                f++;
            }else{
                cout<<x[f]<<" "<<x[r]<<" ";
                r--;
                f++;
                if(a%2!=0 && f-r==0){
                    cout<<x[r];
                    break;
                }
            
            }
            
            
        }
        cout<<"\n";
        
        
        
    }
    
    
    
    
   
    return 0;
}