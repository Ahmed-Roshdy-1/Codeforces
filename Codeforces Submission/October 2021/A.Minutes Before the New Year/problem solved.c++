#include <iostream>

using namespace std;


int main(){
    int t;
    int min=0;
    cin>>t;
    while (t--)
    {
        int h,m;
        cin>>h>>m;
        min=(24-h)*60-m;
        cout<<min<<"\n";
    }
    

    return 0;
}