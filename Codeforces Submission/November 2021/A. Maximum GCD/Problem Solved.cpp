#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        if(n%2!=0) n=n-1;
        n/=2;
        cout<<n<<"\n";
        
    }
    


    return 0;
}