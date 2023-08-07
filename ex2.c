#include <stdio.h>
#include <string.h>

int main() {

    int temps[12];
    char *months[12] = {
        "janeiro", "fevereiro", "março", "abril", "maio", "junho",
        "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"
    };
    
    for (int i = 0; i < 12; i++) {
        printf("Temperatura media de %s: ", months[i]);
        scanf("%d", &temps[i]);
    }
    
    int maiorTemp = temps[0];
    int menorTemp = temps[0];
    int indexMaxTemp = 0;
    int indexMinTemp = 0;
    
    for (int i = 1; i < 12; i++) {
        if (temps[i] > maiorTemp) {
            maiorTemp = temps[i];
            indexMaxTemp = i;
        }
        if (temps[i] < menorTemp) {
            menorTemp = temps[i];
            indexMinTemp = i;
        }
    }
    
    printf("\nMaior temperatura do ano: %d em %s\n", maiorTemp, months[indexMaxTemp]);
    printf("Menor temperatura do ano: %d em %s\n", menorTemp, months[indexMinTemp]);
    
    return 0;
}