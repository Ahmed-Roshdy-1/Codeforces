#include<iostream>

using namespace std;

int main(){

    int n,m;
    cin>>n>>m;
    int c=min(n,m);
    c%2?   cout<<"Akshat" : cout<<"Malvika";

    return 0;
}