#include <stdio.h>

int main(){

   int codigo, qtd;
   double preco;

   printf("Codigo do produto comprado: ");
   scanf("%i", &codigo);

   printf("Quantidade comprada: ");
   scanf("%i", &qtd);

   if (codigo == 1){
       preco = 5.00 * qtd;
       printf("Valor a pagar: R$%.2lf", preco);
   }
   else if (codigo == 2){
       preco = 3.50 * qtd;
       printf("Valor a pagar: R$%.2lf", preco);
   }
   else if (codigo == 3){
       preco = 4.80 * qtd;
       printf("Valor a pagar: R$%.2lf", preco);
   }
   else if (codigo == 4){
       preco = 8.90 * qtd;
       printf("Valor a pagar: R$%.2lf", preco);
   }
   else if (codigo == 5){
       preco = 7.32 * qtd;
       printf("Valor a pagar: R$%.2lf", preco);
   }

  return 0;
}
