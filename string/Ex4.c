/*Faça um programa para criptografar uma frase dada pelo usuário (a criptografia
troca as vogais da frase por *). Mostre a mensagem criptografada na tela.
Exemplo:
Frase: EU ESTOU NA ESCOLA
Saída: ** * ST** N* *SC*L**/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char frase[50];

    printf("Digite uma frase: ");
    gets(frase);

    for(int i = 0; i < strlen(frase); i++){
        if(toupper(frase[i]) == toupper('a') || toupper(frase[i]) == toupper('e') || toupper(frase[i]) == toupper('i') || toupper(frase[i]) == toupper('o') || toupper(frase[i]) == toupper('u')){
            frase[i] = '*';
        }
    }

    for(int i = 0; i< strlen(frase); i++){
        printf("%c", toupper(frase[i]));

        if(i == strlen(frase) - 1) printf("\n");
    }
}