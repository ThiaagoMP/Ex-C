#include<stdio.h>

int main(){
    int x[7];

    for(int i = 0; i<7;i++){
        scanf("%d",&x[i]);
    }

    int maxNote = x[0];
    for (int i = 0; i < 7; i++)
    {
        if(x[i] > maxNote){
            maxNote = x[i];
        }

        if(x[i] < 7){
            printf("O aluno do index %d precisa tirar: %d\n",i, 7 - x[i]);
        }
    }

    printf("Maior nota: %d",maxNote)
    

    return 0;
}