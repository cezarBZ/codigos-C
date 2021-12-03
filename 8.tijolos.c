#include <stdio.h>


int main(){

  float Quantidade, AlturaTijolo, LarguraTijolo, AlturaParede, LarguraParede;

    printf("Digite a altura do tijolo: ");
    scanf("%f", &AlturaTijolo);

    printf("Digite a largura do tijolo: ");
    scanf("%f", &LarguraTijolo);

    printf("\nDigite a altura da parede: ");
    scanf("%f", &AlturaParede);

    printf("Digite a largura da parede: ");
    scanf("%f", &LarguraParede);

    Quantidade= (AlturaParede*LarguraParede / AlturaTijolo*LarguraTijolo);

    printf("\nA quantidade de tijolos necessaria eh: %.2f blocos\n", Quantidade);





return 0;
}
