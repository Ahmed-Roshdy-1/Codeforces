#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin,s);
    set <char> k;
    for (int  i = 0; i < s.length(); i++)
    {
        if(isalpha(s[i])){
            k.insert(s[i]);
        }
    }
    cout<<k.size();
    

    return 0;
}