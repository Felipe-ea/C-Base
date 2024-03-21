#include <stdio.h>

int main(){

   int X, Y;

   printf("Digite os valores das coordenadas X e Y: \n");
   scanf("%i", &X);
   scanf("%i", &Y);

   while (X != 0 && Y != 0){
      if ( X > 0 && Y > 0){
         printf("QUADRANTE Q1\n");
      }
      else if (X < 0 && Y > 0){
         printf("QUADRANTE Q2\n");
      }
      else if (X < 0 && Y < 0){
         printf("QUADRANTE Q3\n");
      }
      else if (X > 0 && Y < 0){
         printf("QUADRANTE Q4\n");
      }
   printf("Digite os valores das coordenadas X e Y: \n");
   scanf("%i", &X);
   scanf("%i", &Y);
   }

return 0;
}
