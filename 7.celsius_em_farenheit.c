#include <stdio.h>

int main(){

    float C, F;

    printf("Insira a temperatura em Farenheit: ");
    scanf("%f", &F);

    //fórmula mais simples
     C=(F-32) / 1.8;

    printf("A temperatura em Celsius eh: %.1f graus", C);




return 0;
}
