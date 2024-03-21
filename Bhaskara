#include <stdio.h>
#include <string.h>

int main(){

   double A, B, C, X1, X2, delta;

   printf("Coeficiente a: ");
   scanf("%lf", &A);

   printf("Coeficiente b: ");
   scanf("%lf", &B);

   printf("Coeficiente c: ");
   scanf("%lf", &C);

   delta = pow(B, 2) - 4 * A * C;

   if (delta >= 0) {
    X1 = ((-B) + sqrt(delta)) / (2 * A);
    X2 = ((-B) - sqrt(delta)) / (2 * A);
    printf("X1 = %.4lf\n", X1);
    printf("X2 = %.4lf\n", X2);
   }
   else {
    printf("Esta equacao nao possui raizes reais");
    }

   return 0;
}

*******************  DEFINIÇÃO DO ALGORITMO  *****************
Código calcula equação usando fórmula de Bhaskara.
