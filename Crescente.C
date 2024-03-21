#include <stdio.h>

int main(){

   int X, Y;

    printf("Digite dois numeros: \n");
    scanf("%i %i", &X, &Y);

   while (X != Y){
      if (X > Y){
        printf("CRESCENTE\n");
        printf("Digite outros dois numeros: \n");
        scanf("%i %i", &X, &Y);
      }
      else{
        printf("DECRESCENTE\n");
        printf("Digite outros dois numeros: \n");
        scanf("%i %i", &X, &Y);
      }
   }

*******************  DEFINIÇÃO DO ALGORITMO  *****************




return 0;
}
