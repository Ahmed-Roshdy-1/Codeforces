#include <iostream>


using namespace std;

int main(){
    
        string n,a;
        cin>>n>>a;
    
    
        for(int i=0;i<n.size();i++){
            if(a[i] < 92){ //if it Upercase
               a[i] +=32;  // convet it to lowercase
            }
            if(n[i] < 92){ //if it Upercass 
               n[i] +=32;
            }
        
        }

        if(n<a){
            cout<<-1;
        }
        if (a<n){
            cout<<1;
        }
        if(a==n){
            cout <<0;
        }


    return 0;
}