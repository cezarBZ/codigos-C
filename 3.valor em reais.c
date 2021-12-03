#include <stdio.h>

int main(){
    float VAL_REAL, VAL_DOLAR, COT;

    printf("Quantidade de dolares no cofre: ");
    scanf("%f", &VAL_DOLAR);

    printf("Cotacao do dolar hoje: ");
    scanf("%f", &COT);

    VAL_REAL= VAL_DOLAR * COT;

    printf(" Quantidade em reais: %.2f\n", VAL_REAL);




return 0;
}
