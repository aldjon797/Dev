#include <stdio.h>

int main(){
    int num1;
    int num2;
    int minimo;

    printf("quanti numeri vuoi inserire : ");
    scanf("%d",&num1);

    for (int i = 0  ; i < num1 ; i++){
        printf("inserisci le numeri : ");
        scanf("%d",&num2);

       
        if ( (i == 0) || (num2 < minimo)){
            minimo =num2;

        }


    }
    
printf("il numero piu piccolo e %d",minimo);


    return 0;
}