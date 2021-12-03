#include <stdio.h>

int main() {

    int AnoAtual, AnoNascimento, idade;

    printf("Digite o ano atual: ");
    scanf("%d", &AnoAtual);

    printf("Digite o ano do seu nascimento: ");
    scanf("%d", &AnoNascimento);

    idade= AnoAtual-AnoNascimento;

    printf("Idade: %d\n", idade);



    return 0;
}
