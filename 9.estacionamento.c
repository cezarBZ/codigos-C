#include <stdio.h>
#include <math.h>

int main(){

  int HE, ME, HS, MS, hora, minuto, tempo;
  float PAG;
  double precominuto;


  printf("Digite a hora e o minuto da entrada: \n");
  scanf("%d", &HE);
  scanf("%d", &ME);

  printf("\nDigite a hora e o minuto de saida: \n");
  scanf("%d", &HS);
  scanf("%d", &MS);

hora= (HS-HE)*60;
minuto=MS-ME;

precominuto=0.0666666666666667;
  PAG=(hora + minuto)* precominuto;

  printf("Valor a ser pago: %.1f reais", PAG);









return 0;
}
