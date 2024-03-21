#include <stdio.h>

int main(){
    int X;

    printf("Digite o valor de X: ");
    scanf("%i", &X);

    for (int i = 1; i <= X; i++) {
        if (i % 2 != 0) {
             printf("%i\n", i);
        }
    }

    return 0;
}
