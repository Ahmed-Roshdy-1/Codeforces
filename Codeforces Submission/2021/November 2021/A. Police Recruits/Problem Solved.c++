#include <iostream>

using namespace std;

int main(){

    int n,O=0,NumOfCrime=0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>0){
            O=O+arr[i];
        }
        if(arr[i]<0 && O==0){
            NumOfCrime++;

        }else if (arr[i]<0 && O>0)
        {
            O--;
            
        }
        
       
    }

    cout<<NumOfCrime;

    

    return 0;
}