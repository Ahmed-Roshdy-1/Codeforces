#include <iostream>

using namespace std;

int main(){

    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    char temp;
    while (t)
    {
        for(int i=0;i<n-1;i++){
            temp=s[i];
               if(s[i]=='B'&&s[i+1]=='G'){
                    s[i]=s[i+1];
                    s[i+1]=temp;
                    i++;
                }
            


        }
        t--;
    }    
    
    cout<<s;
    return 0;
}