#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    while (n--)
    {
       int x;
       cin>> x;
       if(x%3==0){
           cout<<x/3<<" "<<x/3<<"\n";
       }else{
           int y=(x-1)/3;
           if(y+(y+1)*2==x){
               cout<<y<<" "<<y+1<<"\n";
           }else{
                cout<<y+1<<" "<<y<<"\n";
           }
           
       }
       
    }
    


    return 0;
}