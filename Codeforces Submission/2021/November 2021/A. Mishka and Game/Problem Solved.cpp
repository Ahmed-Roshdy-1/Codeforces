#include <iostream>
#include <bits\stdc++.h>

using namespace std;

int main(){
    int t,c1=0,c2=0;
    cin>>t;
    while (t--)
    {
        int m,c;
        cin>>m>>c;
        if (m>c){
            c1++;

        }else if (c>m)
        {
            c2++;
        }
        
    }
    if(c1>c2){
        cout<<"Mishka"<<"\n";
    }else if (c2>c1)
    {
        cout<<"Chris"<<"\n";
    }else{
        cout<<"Friendship is magic!^^"<<"\n";
    }
    
    

    return 0;
}