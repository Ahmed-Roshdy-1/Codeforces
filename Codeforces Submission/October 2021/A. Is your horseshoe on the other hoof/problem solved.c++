#include <iostream>
#include <bits/stdc++.h>


using namespace std;



int main(){

    long long s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    int n=4;
    long long a[4]={s1,s2,s3,s4};
    sort(a,a+4);
    
   for (int i = 0; i < 3 ; i++) {
       
        if (a[i] == a[i+1]) {
            
            n--;
        
            
        }
        
    }
   
   cout<<4-n;

    return 0;
}