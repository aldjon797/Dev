#include <stdio.h>

int main(){
    float basa = 0;
    float altezza = 0;
    float area;

    printf("inserisci la base dell rettangolo :");
    scanf("%f",&basa);
    printf("inserisci la altezza dell rettangolo : ");
    scanf("%f",&altezza);

    area = basa * altezza;

    printf("l'area e uguale a %.2f ",area);
    return 0;
}