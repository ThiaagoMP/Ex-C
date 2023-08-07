#include<stdio.h>

int main(){
    int x[6];

    for(int i = 0; i<6;i++){
        scanf("%d",&x[i]);
    }

    int quantityPair = 0;
    int quantityOdd = 0;

    int pairs[6];
    int odds[6];

    for(int i = 0; i<6;i++){
        if(x[i] % 2 == 0){
            pairs[quantityPair] = x[i];
            quantityPair++;
        }else{
            odds[quantityOdd] = x[i];
            quantityOdd++;
        }
    }

    for(int i = 0; i<quantityPair;i++){
        printf("\n%d\n",pairs[i]);
    }
    printf("Quantidade de pares: %d\n",quantityPair);

    for(int i = 0; i<quantityOdd;i++){
        printf("\n%d\n",odds[i]);
    }
    printf("\nQuantidade de impares: %d\n",quantityOdd);

    return 0;
}