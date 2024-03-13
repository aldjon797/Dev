#include <stdio.h>

int main(){
    float gradi_celsious = 0;
    float gradi_f = 0;



    printf("inserisci la temperatura :");
    scanf("%f",&gradi_celsious);
 gradi_f=(gradi_celsious * 1.8 ) + 32;

 printf("%.2f",gradi_f); 

    return 0;
}