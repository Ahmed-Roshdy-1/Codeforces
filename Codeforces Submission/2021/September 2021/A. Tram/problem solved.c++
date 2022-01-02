#include <iostream>

using namespace std;

int main(){

    int n,a,b,capacity=0,largeC=0;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a>>b;
        capacity+=(b-a);
        if(capacity>largeC){
            largeC=capacity;
        }
    }
    cout<<largeC;

    return 0;
}