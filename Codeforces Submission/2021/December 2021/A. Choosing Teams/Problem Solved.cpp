#include <iostream>
#include <bits\stdc++.h>
using namespace std;
int main(){
    int n,k,x,c=0;
    cin>>n>>k;
    while (n--)
    {
        cin>>x;
        if(5-x>=k) c++;
    }
    cout<<c/3;
    return 0;
}