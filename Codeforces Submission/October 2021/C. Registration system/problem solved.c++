#include <iostream>
#include <map>
using namespace std;

int main(){
    int t;
    cin>>t;
    map<string,int> mp;
    
    for(int i=0;i<t;i++){
        string s;
        cin>>s;
        if(mp.find(s)==mp.end()){
            mp[s]=0;
            cout<<"OK"<<"\n";
        }else{
            mp[s]++;
            cout<<s<<mp[s]<<"\n";

        }

    }
    
    return 0;
}