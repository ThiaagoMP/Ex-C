#include <stdio.h>
#include <stdlib.h>

int main(){
    int x[2][2];
    int xMax[2][2];;

    int numMax = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            int numberRead;
            scanf("%d",&numberRead);
            x[i][j] = numberRead;
            xMax[i][j] = numberRead;

            if(x[i][j] > numMax){
                numMax = x[i][j];
            }
        }
        
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            xMax[i][j] = x[i][j] * numMax;    
            printf("%d ", xMax[i][j]);
        }
        printf("\n");
    }



    return 0;
}