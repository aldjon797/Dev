#include <stdio.h>

int main(){
    float num_1;
    float num_2;
    float somma;
    float media;
    float sotrazione;

    printf("inserisci un numero :");
    scanf("%f",&num_1);

    printf("inserisci il secondo numero :");
    scanf("%f",&num_2);

    somma = num_1 + num_2;
    media = num_1 / num_2;
    sotrazione = num_1 - num_2;

    printf("la somma e uguale = %.2f",somma);
    printf("\nla media e uguale = %.2f",media);
    printf("\nla sotrazione e uguale  = %.2f",sotrazione);
   
    return 0;
}