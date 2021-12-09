#include <iostream>
#include <bits\stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
       int w,h,n,c=1;
       cin>>w>>h>>n;
       int area=w*h;
       while (area%2==0)
       {
           area/=2;
           c*=2;
       }

       if(c>=n){
           cout<<"YES \n";
       }else{
           cout<<"NO \n";
       }
       

        
    }
    

    return 0;
}