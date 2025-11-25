//Inclui a biblioteca stdio.h q permite usar entara e saida de infos.(printf e scanf)
#include<stdio.h>

//Inclui a biblioteca stdlib.h q permite funcoes utilitarias (system())
#include<stdlib.h>

//declarar funcao principal, onde o programa começa sua execução
int main(){
    float numero1, numero2, respostaDiv;

    printf("Digite o primeiro número: ");
    scanf("%f", &numero1);

    printf("Digite o segundo número: ");
    scanf("%f", &numero2);

    respostaDiv = numero1 / numero2;

    printf("A divisão dos 2 números é: %.2f", respostaDiv);

    //pausar o sistema ate q o usuario pressione qualquer tecla
    system("pause");
    //finaliza o programa retornando 0, indicando que tudo ocorreu bem
    return 0;
}
