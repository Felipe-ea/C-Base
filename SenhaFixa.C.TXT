#include <stdio.h>

int main(){

   int senha;

   printf("Digite a senha: ");
   scanf("%i", &senha);

   while (senha != 2002){
        printf("Senha Invalida! Tente novamente: ");
        scanf("%i", &senha);
   }

   printf("Acesso permitido!");



return 0;
}
