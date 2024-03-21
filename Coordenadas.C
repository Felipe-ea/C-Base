#include <stdio.h>

int main(){

    double X, Y;

   printf("Valor de X: ");
   scanf("%lf", &X);

   printf("Valor de Y: ");
   scanf("%lf", &Y);

   if (X > 0 && Y > 0){
    printf("Q1");
   }
   else if (X < 0 && Y > 0){
    printf("Q2");
   }
   else if (X < 0 && Y < 0){
    printf("Q3");
   }
   else if (X > 0 && Y < 0){
    printf("Q4");
   }
   else if (X == 0 && Y == 0){
    printf("ORIGEM");
   }
   else if (X == 0 && Y != 0){
    printf("Eixo Y");
   }
   else if (X != 0 && Y == 0){
    printf("Eixo X");
   }


return 0;
}

*******************  DEFINIÇÃO DO ALGORITMO  *****************
Código verifica e indica em qual quadrante se encontra a coordenada baseado nos pontos x e y.
