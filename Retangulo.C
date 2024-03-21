#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

   double base, altura, area, perimetro, diagonal;

   printf("Base do retangulo: ");
   scanf("%lf", &base);
   printf("Altura do retangulo: ", altura);
   scanf("%lf", &altura);

   area = base * altura;
   perimetro = 2 * (base + altura);
   diagonal = sqrt(pow(base, 2.0) + (pow(altura, 2.0)));

   printf("AREA = %.2lf\n", area);
   printf("PERIMETRO = %.2lf\n", perimetro);
   printf("DIAGONAL = %.2lf\n", diagonal);

   return 0;
}
