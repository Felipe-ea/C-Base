#include <stdio.h>

int main(){

   double salario, novoSalario, aumento;
   int porcentagem;

   printf("Digite o salario da pessoa: ");
   scanf("%lf", &salario);

    if (salario <= 1000.0){
        porcentagem = 20;
        novoSalario = salario + (salario * porcentagem/100);
        aumento = novoSalario - salario;
       }
    else if (salario <= 3000.0){
        porcentagem = 15;
        novoSalario = salario + (salario * porcentagem/100);
        aumento = novoSalario - salario;
       }
    else if (salario <= 8000.0){
        porcentagem = 10;
        novoSalario = salario + (salario * porcentagem/100);
        aumento = novoSalario - salario;
       }
    else {
        porcentagem = 5;
        novoSalario = salario + (salario * porcentagem/100);
        aumento = novoSalario - salario;
       }

    printf("Novo salario = R$ %.2lf\n", novoSalario);
    printf("Aumento = R$ %.2lf\n", aumento);
    printf("Porcentagem = %i %%\n", porcentagem);


return 0;
}

*******************  DEFINIÇÃO DO ALGORITMO  *****************
Código calcula aumento do salário.
