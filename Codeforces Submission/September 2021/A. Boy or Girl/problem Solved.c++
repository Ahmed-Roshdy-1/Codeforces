#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    string S;
    cin>>S;
    sort(S.begin(),S.end());
    int count=1;
    for(int i=0;i<S.length()-1;i++){
       
            if(S[i]!=S[i+1]){
               count++;
            }
        

    }

    if(count%2==0){
        cout<< "CHAT WITH HER!" ;
        
    }else{
        cout<< "IGNORE HIM!" ;
        
    }

    

    return 0;
}