#include <iostream>
#include <bits/stdc++.h>


using namespace std;

int main(){
    int n;
    cin>>n;
    while (n--)
    {
        int t,x,c=0;
        cin>>t;
        for(int i=1;i<=t;i++){
            cin>>x;
            if(x%2!=0){
                c++;
            }
            
        }
        if(c==0){
            cout<<"NO"<<endl;
        }else if(t%2==0 && c==t){
             cout<<"NO"<<endl;

        }else{
            cout<<"YES"<<endl;
        }
    }
    
    
   
    
    

    return 0;
}