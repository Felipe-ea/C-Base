#include<stdio.h>

int main(){

   double precoUnidade, recebido, troco;
   int qtd;

   printf("Preco unitario do produto: ");
   scanf("%lf", &precoUnidade);

   printf("Quantidade comprada: ");
   scanf("%i", &qtd);

   printf("Dinheiro recebido: ");
   scanf("%lf", &recebido);

   troco = recebido - (qtd * precoUnidade);

   printf("TROCO = %.2lf", troco);



   return 0;
}
