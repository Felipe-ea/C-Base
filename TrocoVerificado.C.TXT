#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

   int qtd;
   double preco, recebido, troco;

   printf("Preco unitario do produto: ");
   scanf("%lf", &preco);

   printf("Quantidade comprada: ");
   scanf("%i", &qtd);

   printf("Dinheiro recebido: ");
   scanf("%lf", &recebido);


   troco = recebido - (qtd * preco);

   if (troco < 0){
    troco = abs(troco);
    printf("DINHEIRO INSUFICIENTE. FALTAM %.2lf REAIS ", troco);
   }
   else{
       printf("Troco = %.2lf", troco);
   }

return 0;
}
