#include <stdio.h>
#include <string.h>



int main(){
    
    int n,X=0;
    char Str[4];
    
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",&Str);

            if (strcmp(Str,"++X")==0 || strcmp(Str,"X++")==0)
            {
                X++;
            }else{
                X--;
            }
            

    }  

    printf("%d",X);

    return 0;
}