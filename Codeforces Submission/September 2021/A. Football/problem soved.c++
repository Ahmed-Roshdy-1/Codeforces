#include <iostream>

using namespace std;

int main(){
    int i=0,j=0,n=0;
    string S;
    cin>>S;
    while (i<S.length())
    {
         if(S[i]==S[i+1]){
            n++;
            if(n==6){
                cout<<"YES";
                break;
            }
        }else{
            n=0;
               
           }
           i++;
           
    }
        
   if(n<6){
       cout<<"NO";
   }

    return 0;
}