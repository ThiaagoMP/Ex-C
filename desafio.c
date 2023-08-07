int main(){

    int percentAdded = 0.05;

    int valueUnit[10];
    int quantity[10];

    for(int i = 0; i<10;i++){
        printf("Digite o valor unitario: \n");
        scanf("%d",&valueUnit[i]);

        printf("Digite a quantidade: \n");
        scanf("%d",&quantity[i]);
    }

    int valueTotal = 0;
    int bestSeller = 0;

    for(int i = 0; i<10;i++){
        if(quantity[i] > bestSeller) {
            bestSeller = i;
        }

        printf("Index %d Valor %d, Valor total %d, quantidade %d\n",i,valueUnit[i],valueUnit[i] * quantity[i], quantity[i]);
        valueTotal+=valueUnit[i] * quantity[i];
    }

    printf("Valor geral de vendas: %d\n",valueTotal);
    printf("Comissão do vendedor: %d\n",valueTotal += (valueTotal*percentAdded));
    printf("Valor do objeto mais vendido: %d\n", valueUnit[bestSeller]);

    return 0;
}