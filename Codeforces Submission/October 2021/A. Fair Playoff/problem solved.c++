#include <iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
       int  s1,s2,s3,s4,flage=1,player1,player2;
       cin>>s1>>s2>>s3>>s4;
       if(s1>s2){
           player1=s2;
       }else{
           player1=s1;
       }

        if(s3>s4){
           player2=s4;
       }else{
           player2=s3;
       }

       if(s1>s2 && player2>s1){
           flage=0;
       }else if(s2>s1 && player2>s2){
           flage=0;
       }

        if(s3>s4 && player1>s3){
           flage=0;
       }else if(s4>s3 && player1>s4){
           flage=0;
       }
       if(flage==0){
           cout<<"NO"<<"\n";
       }else{
           cout<<"YES"<<"\n";
       }
    }
    

    return 0;
}