#include<stdio.h>
#include <string.h>
int main(){
    int x;
    scanf("%d",&x);
    char S[5000]="";
    for(int i=0;i< x;i++){
        
    scanf("%s",S);
    int count=strlen(S);

    if(count<= 10){
        printf("%s\n",S);
    }else{
        
     printf("%c%d%c\n",S[0],count-2,S[count-1]);
    }
    
    }
  return 0;
}


