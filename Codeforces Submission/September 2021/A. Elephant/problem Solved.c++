#include <iostream>

using namespace std;

int main(){
    int x,count=0;
    cin>>x;
    if( x==1 || x==2 || x==3 || x==4 || x==5){
        cout<<1;
    }else{

        for(int i=0;;i++){
           if(x==0){
               break;
           }else{
               if(x>=5){
               x=x-5;
               count++;
           }else if(x=4){
               x=x-4;
               count++;
           }else if(x=3){
               x=x-3;
               count++;
           }else if(x=2){
               x=x-2;
               count++;
           }else if(x=1){
               x=x-1;
               count++;
           }
           }
       
        }
        cout<<count;

    }
    



    return 0;
}