#include <stdio.h>

int main() {


    int D, PR, PAG;

    printf("Insira o valor do produto: ");
    scanf("%d", &PR);

    printf("Insira a porcentagem de desconto: ");
    scanf("%d", &D);

    PAG= PR - (PR * D / 100);

    printf("Valor a ser pago: %d\n", PAG);




}

