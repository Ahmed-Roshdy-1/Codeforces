#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
       if(n<3){
           cout<<1<<"\n";
       }else{
           if(n%2==0){
               n=n/2;
           }else{
               n=n/2+1;
           }
           cout<<n<<"\n";
       }
        
    }
    


    return 0;
}