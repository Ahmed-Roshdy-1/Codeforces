#include<iostream>
#include <bits/stdc++.h>


using namespace std;

int main(){

   int a,b,c;
   cin>>a>>b;
   c=max(a,b);
   string pro[6]={"1/1","5/6","2/3","1/2","1/3","1/6"};
    cout<<pro[c-1];

    return 0;
}