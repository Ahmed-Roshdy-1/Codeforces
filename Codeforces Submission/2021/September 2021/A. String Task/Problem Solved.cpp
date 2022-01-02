#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
   
   string S,S1;
   cin>>S;
   for(int i=0;i<S.length();i++){
       if(S[i] < 92){
           S[i]+=32; // to covete UperCase to lowercase
       }
       if(S[i] !='a'&& S[i] !='o' && S[i] !='y' && S[i] !='e' && S[i] !='u'&& S[i]!='i'){
           S1=S1+'.';
           S1= S1+S[i];
          

       }
   }
   cout<<S1;

    return 0;
}