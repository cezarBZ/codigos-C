#include <stdio.h>

 main(){
    double raio, area, PI;


    scanf("%lf", &raio);
    PI= 3.14159;
    area= PI*(raio*raio);

    //o codigo ".4f" eh para indicar que serao 4 numeros apos o ponto
    printf("A=%.4f\n", area);

return 0;

}
