#include <iostream>

using namespace std;

int main(){

    int k,n,w,cost=0;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++){
        cost =cost+(i*k);
    }
    cost<=n? cout<<0:cout<<(cost-n);



    return 0;
}