#include <iostream>

using namespace std;

int main(){
    int n,t, c=0;
    cin>>n>>t;
    for (int i = 1; i <= n; i++)
    {
        t+=i*5;
        if(t<=240) {c=i;}else break; 
        
    }
    cout<<c;
    


    
    

    return 0;
}