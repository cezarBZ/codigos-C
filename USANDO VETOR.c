#include <stdio.h>

int main (){

    // declarando e inicializando o vetor notas
        float  notas [5] = {7, 8, 9.5, 9.9, 5.2};

      // "int i" será usado como contador para realizar os comandos
           int i;

           printf ("Exibindo os valores do vetor\n\n");

           // inicialização; condição; incremento
           for(i = 0; i <= 4; i++)
           {
               // usando "i" como contador para ir do número 0 até o 4 atualizando em cada linha
               printf("notas[%d] = %.1f  \n", i, notas[i]);
           }

return 0;
}
