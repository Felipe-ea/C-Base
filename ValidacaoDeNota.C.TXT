#include <stdio.h>

int main(){

   double media, N1, N2;

   printf("Digite a primeira nota: ");
   scanf("%lf", &N1);

   while (N1 < 0 || N1 > 10){
      printf("Valor invalido! Tente novamente: ");
      scanf("%lf", &N1);
   }

    printf("Digite a segunda nota: ");
    scanf("%lf", &N2);

    while (N2 < 0 || N2 > 10){
      printf("Valor invalido! Tente novamente: ");
      scanf("%lf", &N2);
    }

    media = (N1 + N2) / 2;
    printf("MEDIA = %.2lf", media);
return 0;
}
