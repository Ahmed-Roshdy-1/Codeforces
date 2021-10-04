#include <iostream>

using namespace std;

int main(){
    int n,x,y=0;
    
    cin>>n;
    
    
    for(int i=0;i<n;i++){
        cin>>x;
       y=y+x;
    }
    cout<<(double)y/n;
   

    return 0;
}