include <stdio.h>

int main(){

   int Hi, Hf;

   printf("Hora inicial: ");
   scanf("%i", &Hi);

   printf("Hora final: ");
   scanf("%i", &Hf);

    if (Hf > Hi){
       printf("O JOGO DUROU %i HORA(S)", Hf - Hi);
   }
    else
        printf("O JOGO DUROU %i HORA(S)", 24 - Hi + Hf);




return 0;
}
