#include <stdio.h>

int main(){

    int matrix[5][5],x,y,move;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&matrix[i][j]);
            if(matrix[i][j]==1){
                x=i+1;
                y=j+1;
            }
        }
    }
    
    if(x>3){
        x=x-3;
    }else if (x<3)
    {
        x=3-x;
    }else{
        x=0;
    }

    if(y>3){
        y=y-3;
    }else if (y<3)
    {
        y=3-y;
    }else{
        y=0;
    }

    move=x+y;

    
    printf("%d",move);

    return 0;
}