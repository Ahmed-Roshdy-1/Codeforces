#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0,n1=0,n2=0,n3=0,n4=0;
    cin>>n;
    int s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
       
        if(s[i]==1){
            n1++;
        }else if(s[i]==2){
            n2++;
        }else if(s[i]==3){
            n3++;
        }else{
            n4++;
        }
        
    }
    count=n4;
    while (n1 !=0 && n3!=0)
    {
        n3--;
        n1--;
        count++;

    }

    if(n1== 0 && n3!=0){
        count=count+n3;
        n3=0;
    }

    count=count+n2/2;
    if(n2%2 !=0 ){
        if(n1<=2){
            count=count+1;
            n1=0;
            n2=0;
        }else{
            n1=n1-2;
            n2=0;
            count++;
        }
    }
    if(n1>0){
        count=count+n1/4;
        if(n1 % 4 != 0){
            count++;
        }
    }

    cout<<count;
    


    

    return 0;
}