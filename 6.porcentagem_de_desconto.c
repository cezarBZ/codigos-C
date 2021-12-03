#include <stdio.h>

int main() {
    float PRECOF, PRECO;
    int DESC;

    printf("Preco original: ");
    scanf("%f", &PRECO);

    printf("Preco com o desconto: ");
    scanf("%f", &PRECOF);

    DESC = (PRECO - PRECOF) / (PRECO/100);

    printf("O desconto foi: %d por cento\n", DESC);




return 0;
}

