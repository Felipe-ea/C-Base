#include <stdio.h>

int main(){

   int N, qtd;
   double soma, media;

   printf("Digite as idades: \n");
   scanf("%i", &N);

      if (N < 0){
        printf("IMPOSSIVEL CALCULAR");
      }
      else{
               soma = 0;
               qtd = 0;
          while (N >= 0){
             soma = soma + N;
             qtd++;
             scanf("%i", &N);
          }
      media = (soma / qtd);
      printf("MEDIA = %.2lf", media);
   }
return 0;
}
