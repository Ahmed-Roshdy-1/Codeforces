#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x,c=1;
        cin>>x;
        string s;
        cin>>s;
        for(int i=0;i<x;i++){
            if(s[i]!=s[i+1]){

                for(int j=i+2;j<x;j++){
                    if(s[i]==s[j]){
                        c=0;
                    }
                }

                }  

        }
        if(c==0){
            cout<<"NO"<<"\n";
        }else{
            cout<<"Yes"<<"\n";
            
        }
       
    }
    




      return 0;
}