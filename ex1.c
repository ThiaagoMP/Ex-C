#include<stdio.h>

int main(){
    int x[9];

    for(int i = 0; i<9;i++){
        scanf("%d",&x[i]);
    }

    for(int i = 0; i<9;i++){
        if(x[i] % 2 == 0){
            printf("Index: %d, Numero:%d\n",i,x[i]);
        }
    }

    return 0;
}