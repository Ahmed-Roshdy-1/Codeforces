#include <iostream>
#include <string>

using namespace std;

int main(){
    int n ,f;
    cin>>n;
    int arr[n+1];
    for(int i=1;i<=n;i++){
        cin>>f;
        arr[f]=i;
    }
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }





    return 0;
}