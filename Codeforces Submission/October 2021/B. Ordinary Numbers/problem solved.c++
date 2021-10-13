#include <iostream>

using namespace std;

int main(){
    long long t,count=0;
    cin>>t;
    while (t--)
    {
       long long x;
       cin>>x;
       for(int i=1;i<=9;i++){
           for(long long j=i;j<=x;){
               j=(j*10)+i;
               count++;
           }
       }
       cout<<count<<"\n";
       count=0;
    }
    return 0;
}