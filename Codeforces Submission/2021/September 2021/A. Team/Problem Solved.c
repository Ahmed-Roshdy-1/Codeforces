#include <stdio.h>

int main(){

    int n,x,y,z ,count=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d%d%d",&x,&y,&z);
        if(x==1&&y==1||y==1&&z==1||z==1&&x==1){
            count++;
        }
    }

    printf("%d",count);

    return 0;
}