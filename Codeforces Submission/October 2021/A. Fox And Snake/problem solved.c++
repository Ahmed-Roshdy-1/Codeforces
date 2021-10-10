#include <iostream>

using namespace std;

int main(){

    int n,m,flag=1;
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < m; j++)
       {
           if(i%2 !=0 && flag==1){
               if(j == (m-1)){
                   cout<<"#";
                   
               }else{
                   cout<<".";
                   
               }
              
           }else if(i%2 !=0 && flag==0){
               if(j==0){
                   cout<<"#";
               }else{
                   cout<<".";
               }
              
           }else{
               cout<<"#";
           }
          
       }
       if(i%2 !=0&&flag==1){
           flag=0;
       }else if(i%2 !=0&&flag==0){
           flag=1;
       }
       cout<<"\n";
       
    }
    

    return 0;
}