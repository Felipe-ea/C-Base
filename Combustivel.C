#include <stdio.h>

int main(){

   int codigo, gasolina, alcool, diesel;

   printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
   scanf("%i", &codigo);

   alcool = 0;
   gasolina = 0;
   diesel = 0;

   while (codigo != 4){
      if (codigo == 1){
        alcool = alcool + 1;
      }
      else if (codigo == 2){
        gasolina = gasolina + 1;
      }
      else if (codigo == 3){
        diesel = diesel + 1;
      }
   printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
   scanf("%i", &codigo);
   }
   printf("MUITo OBRIGADO\n");
   printf("Alcool = %i\n", alcool);
   printf("Gasolina = %i\n", gasolina);
   printf("Diesel = %i\n", diesel);

return 0;
}

*******************  DEFINIÇÃO DO ALGORITMO  *****************
Código verifica e mostra quantas vezes foi usado determinado produto.

