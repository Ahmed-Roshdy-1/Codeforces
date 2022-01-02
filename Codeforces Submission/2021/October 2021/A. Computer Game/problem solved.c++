#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;


    while (n--)
    {
        int t,flag=1;
        cin>>t;
        string s1,s2;
        cin>>s1>>s2;
        for (int i = 0; i < t; i++)
        {
            if(s1[i]==s2[i] && s1[i] != '0'){
               flag=0;
               break;
            }
        }
        if(flag==1){
            cout<<"YES"<<"\n";
        }else{
            flag=1;
            cout<<"NO"<<"\n";
        }
        
    }
    
    

    return 0;
}