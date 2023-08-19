#include <stdio.h>
#include <stdlib.h>

int main(){
    int x[3][3];

    int numMax = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int numberRead;
            scanf("%d",&numberRead);
            x[i][j] = numberRead;

            if(x[i][j] > numMax){
                numMax = x[i][j];
            }
        }
    }
    
    int numMax = x[0][0];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",x[i][j]);
        }
        printf("\n");
    }

    printf("Maior numero: %d", numMax);

    return 0;
}