#include<stdio.h>
#include<stdlib.h>

int main(){
    float lado, area;

    printf("Digite a medida do lado dos quadrado em m: ");
    scanf("%f", &lado);


    area = lado * lado;

    printf("A área do quadrado é: %.2f", area);
    system("pause");
    return 0;
}
