#include<stdio.h>
#include<stdlib.h>

int main(){

    //declara uma string com tamanho maximo de 50 caracters
    char cidade[50], estado[50];
    int nasc, idade;

    printf("Digite a cidade em que você nasceu: ");
    fgets(cidade, 50, stdin);
    printf("Digite o estado em que você nasceu: ");
    fgets(estado, 50, stdin);

    printf("Digite o seu ano de nascimento: ");
    scanf("%d", &nasc);

    idade = 2025 - nasc;

    printf("Você nasceu em %sNo estado de %sE você tem %d anos.\n", cidade, estado, idade);

    system("pause");
    return 0;
}