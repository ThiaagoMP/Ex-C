/*Implemente um programa que receba o nome de uma música e um caractere
qualquer. Percorra esta cadeia que armazenou o nome da música a procura do
caractere informado e retorne o seu índice ou a mensagem: caractere não
encontrado.
Exemplo:
Entradas
Nome da música: Como uma onda no mar
Caractere: a
Saídas
Ocorrência de caractere na posição 7
Ocorrência de caractere na posição 12
Ocorrência de caractere na posição 18
Entradas
Nome da música: Amor I love you
Caractere: c
Saídas
Caractere nao encontrado.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char letra_musica[50];
    char letra;
    int ocorrencias[20];
    int qtd = 0, num = 0;

    printf("Informe o nome de uma musica: ");
    gets(letra_musica);

    printf("Informe uma letra: ");
    scanf("%c", &letra);

    for(int i = 0; i < strlen(letra_musica); i++){
        if(tolower(letra_musica[i]) == tolower(letra)){
            ocorrencias[num] = i;
            qtd++;
            num++;
        }
    }

    if(qtd > 0){
        for(int i = 0; i < qtd; i++){
            printf("Ocorrencia do caractere na posicao %d\n", ocorrencias[i]);
        }
    }else{
        printf("Caractere nao encontrado\n");
    }
}