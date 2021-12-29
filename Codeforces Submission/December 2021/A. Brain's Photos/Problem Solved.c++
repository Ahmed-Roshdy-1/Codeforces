#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){

    int n,m,i=0;
    cin>>n>>m;
    for(;i<n;i++){
        for(int j=0;j<m;j++){

            char c;
            cin>>c;
            if(c=='B' ||c =='W' || c=='G' ){
                continue;
            }else{
                cout<< "#Color";
                return 0;
            }
        
    }

    }
    
    
        cout<<"#Black&White";
    



    return 0;
}
