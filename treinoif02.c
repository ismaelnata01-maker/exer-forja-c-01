#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    int age1, age2;

    printf("INFORME A PRIMEIRA IDADE: ");
    fflush(stdin);
    scanf("%d", &age1);

    printf("INFORME A SEGUNDA IDADE: ");
    fflush(stdin);
    scanf("%d", &age2);

    printf("\n");

    if(age1 > age2){
        printf("A MAIOR IDADE É: %d", age1);
    }else if(age2 > age1){
        printf("A MAIOR IDADE É: %d", age2);
    }else{
        printf("AS IDADES SÃO AS MESMAS", age1, age2);
    }

    system("pause");
    return 0;
}