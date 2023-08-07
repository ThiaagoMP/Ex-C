#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); 
    
    int numbers[6] = {0}; 
    
    for (int i = 0; i < 20; i++) {
        int number = rand() % 6 + 1; 
        numbers[number - 1]++; 
    }
    
    for (int i = 0; i < 6; i++) {
        printf("%d\t%d\n", i + 1, numbers[i]);
    }
    
    return 0;
}