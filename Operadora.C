#include <stdio.h>

int main(){

   int qtdMinutos;
   double preco;

   printf("Digite a quantidade de minutos: ");
   scanf("%i", &qtdMinutos);

   if (qtdMinutos <= 100){
        preco = 50;
   }
   else{
    preco = 50 + (qtdMinutos - 100) * 2;
   }

   printf("Valor a pagar: R$%.2lf", preco);

return 0;
}
