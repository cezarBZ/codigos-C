#include <stdio.h>

int main(){

    float area, perimetro, largura, comprimento;

    printf("Digite a largura da sala: ");
    scanf("%f", &largura);


    printf("Digite o comprimento da sala: ");
    scanf("%f", &comprimento);

    area = largura * comprimento;
    perimetro= (largura*2) + (comprimento*2);



    printf("Area: %.1f\n", area);
    printf("Perimetro: %.2f\n", perimetro);






return 0;
}
