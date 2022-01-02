#include <iostream>
#include <bits\stdc++.h>
using namespace std;
int main(){
 char c;
 while (cin>>c)
 {
    if(c=='-'){
        cin>>c;
        c=='-'? cout<<"2":cout<<"1";
    }else{
        cout<<"0";
    }
 }
 
  
    
    return 0;
}