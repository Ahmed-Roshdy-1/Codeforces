#include <iostream>

using namespace std;

int main(){

    string str,str2;
   
    cin>>str;
    
    for(int i=0;i<str.length();i++){

        if(str[i] != '+'){
        str2 +=str[i];
        
        }
    }
    char temp;
    for(int i=0;i<str2.size();i++){
        for(int j=i+1;j<str2.size();j++){
            if(str2[i]>str2[j]){
                temp =str2[i];
                str2[i]=str2[j];
                str2[j]=temp;

            }
        }
    }

   
    for(int i=0;i<str2.length();i++){
        cout<<str2[i];
        if(i==(str2.length()-1)){
            break;
        }
        cout<<"+";
    }


    

    return 0;
}