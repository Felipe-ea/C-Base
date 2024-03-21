#include <stdio.h>

int main(){
    int qtd, N, dentro, fora;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%i", &qtd);

    dentro = 0;
    fora = 0;

    for (int i = 1; i <= qtd; i++){
        printf("Digite um numero: ");
        scanf("%i", &N);
        if (N >= 10 && N <= 20){
           dentro++;
        }
        else{
           fora++;
        }
    }
    printf("%i DENTRO\n", dentro);
    printf("%i FORA\n", fora);

    return 0;
}
