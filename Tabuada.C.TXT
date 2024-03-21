#include <stdio.h>

int main(){

    int i, N, soma;

    printf("Deseja a tabuada para qual valor? ");
    scanf("%i", &N);

    for (i = 0; i <= 10; i++){
        soma = i * N;
        printf("%i X %i = %i\n", N, i, soma);

    }


	return 0;
}
