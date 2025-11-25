#include<stdio.h>
#include<stdlib.h>

int main(){

    //declara uma string com tamanho maximo de 50 caracters
    char nome[50];
    int idade;

    printf("Qual seu nome: ");
    fgets(nome, 50, stdin);

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Olá %sVocê tem %d anos de idade.\n", nome, idade);

    system("pause");
    return 0;
}