#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    int idade;

    printf("INFORME UMA IDADE: ");
    scanf(" %d", &idade);

    if (idade >= 15 && idade <= 18){
        printf("a idade está entre 15 e 18 ");
    }else{
        printf("a idade não está entre 15 e 18 ");
    }
    

    system("pause");
    return 0;
}