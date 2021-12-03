#include <stdio.h>

int main() {

    float pr, d;

    printf("Insira o preco do produto em real: ");
    scanf("%f", &pr);

    d= pr*0.05;

    printf("O desconto sera: R$ %.2f", d);


}
