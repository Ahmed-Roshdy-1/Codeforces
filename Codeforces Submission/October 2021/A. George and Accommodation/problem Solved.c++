#include <iostream>

using namespace std;

int main(){

    int n,p,q,count=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>p>>q;

        if(p<q &&q-p>=2){
            count++;
        }
    }
    cout<<count;


    return 0;
}