#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,a,arr[4];
    cin>>n;
    n=n+1;
    bool isDistinct=false;
    while (true)
    {   a=n;
        for(int i=0;i<4;i++){
            arr[i]=a%10;
            a=a/10;
            
        }
        for(int j=0;j<4;j++){
            for(int t=j+1;t<4;t++){
               
                   if(arr[j]!=arr[t]){
                       isDistinct = true;
                    }else{
                          isDistinct=false;
                          break;
                         }
                    
                }
                if(!isDistinct){
                    break;
                }

            }
        
        if(isDistinct){
            cout<<n;
            return 0;
        }

        n++;
        
        
    }
    

    
    

    return 0;
}