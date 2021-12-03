#include <stdio.h>
#include <stdlib.h>

int main() {

   char primeironomedovendedor;

   double salario_fixo, montante_das_vendas_efetuadas, comissao,TOTAL;

    scanf("%s", &primeironomedovendedor);
    scanf("%lf", &salario_fixo);
    scanf("%lf", &montante_das_vendas_efetuadas);

    comissao=montante_das_vendas_efetuadas * 0.15;
    TOTAL=salario_fixo+comissao;

    printf("TOTAL = %.2f\n", TOTAL);



return 0;
}
