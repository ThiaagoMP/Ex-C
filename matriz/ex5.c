#include<stdio.h>
#include<stdlib.h>

int main(){
    int sells[3][4];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int numberRead;
            scanf("%d",&numberRead);
            sells[i][j] = numberRead;
        }
    }

    int total = 0;
    for (int i = 0; i < 3; i++)
    {
        int totalMonthSeller = 0;
        for (int j = 0; j < 4; j++)
        {
            totalMonthSeller += sells[i][j];
        }
        total += totalMonthSeller;
        printf("Total de vendas do vendedor %d R$%d\n",i+1,totalMonthSeller);
    }

    printf("\nTotal de vendas no mes inteiro: %d\n",total);

    for(int i = 0; i < 4; i++){
        printf("Semana %d: R$%d\n", i + 1, sells[0][i]+sells[1][i]+sells[2][i]);
    }
    return 0;
}