#include<stdio.h>
#include<stdlib.h>

#define SIZE_LINE 3
#define SIZE_COLUM 6

int main(){
    int vet[18];
    int x[SIZE_LINE][SIZE_COLUM];

    for (int i = 0; i < 18; i++)
    {
        int numberRead;
        scanf("%d",&numberRead);
        vet[i] = numberRead;
    }

    int line = 0;
    int colum = 0;
    for (int i = 1; i <= 18; i++)
    {
        printf("OLA\n");
        x[line][colum] = vet[i-1];
        colum++;
        if(i % 6 == 0) {
            line++;
            colum = 0;
        }
    }

    printArray(x);
    return 0;
}

void printArray(int array[SIZE_LINE][SIZE_COLUM]){
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}