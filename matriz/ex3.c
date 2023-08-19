#include<stdio.h>
#include<stdlib.h>

#define SIZE_LINE 3
#define SIZE_COLUM 4

int main(){
    int a[SIZE_LINE][SIZE_COLUM];
    int b[SIZE_LINE][SIZE_COLUM];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int numberRead;
            scanf("%d",&numberRead);
            a[i][j] = numberRead;
            if(numberRead % 2 == 0){
                b[i][j] = a[i][j] * 2;
            }else{
                b[i][j] = a[i][j] * 3;
            }
        }
    }

    printf("A: \n");
    printArray(a);
    
    printf("B: \n");
    printArray(b);

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