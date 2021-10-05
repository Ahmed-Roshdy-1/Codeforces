#include <iostream>
#include <bits/stdc++.h>


using namespace std;



int main(){

    int n,p,q,count=0;
    cin>>n;
    int level,all[n+1];
    cin>>p;
    for(int i=0;i<p;i++){
        cin>>level;
        all[level]=1;
        
    }
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>level;
        all[level]=1;    
    }
    for(int i=1;i<=n+1;i++){
        if(all[i]==1){
            count++;
        }   
    }
    
    count==n? cout<<"I become the guy.":cout<<"Oh, my keyboard!";


    return 0;
}