#include <iostream>
#include <bits\stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,p=3;
        cin>>n;
        while (n%p)
        {
            p=p+p+1;
        }
        cout<<n/p<<"\n";
        
    }
    

    return 0;
}