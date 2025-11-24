//inclui a biblioteca stdio.h, permite o uso de entrada 
//e saida de valores como o print
#include<stdio.h>
//inclui a bibliotecca stdlib.h
//para funcoes utilitarias como o system
#include<stdlib.h>

//inicio da função, onde o programa começa a ser executado
int main(){

    float num1, num2 = 100.45;
    //int num2 = 200;

    //printar os números da variável
    printf("%f %d", num1, num2);

    //pausa o programa, ate q o usuario pressione qualquer tecla
    system("pause");
    //finaliza o programa retornanado 0, indicando que deu tudo certo
    return 0;
}