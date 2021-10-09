#include <iostream>

#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    int c=0;
    cin>>n;
    while (n--){
        string s;
        cin>>s;
        if(s=="Tetrahedron"){
            c=c+4;
        }else if(s=="Cube"){
            c=c+6;
        }else if(s=="Octahedron"){
            c=c+8;

        }else if(s=="Dodecahedron"){
            c=c+12;
        }else{
            c=c+20;
        }
    }
    cout<<c<<"\n";  
   
    return 0;
}