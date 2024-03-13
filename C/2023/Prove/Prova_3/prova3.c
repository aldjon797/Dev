#include <stdio.h>

int main(){

    int num1;
    int num2;
    int a , b , resto;
    int mcd;

    printf("inserisci il primo numero :");
    scanf("%d",&num1);
    printf("inserisci il secondo numero : ");
    scanf("%d",&num2);

     while (b != 0) {
        resto = a % b;
        a = b;
       b = resto;
    }

    mcd = (num1 , num2);

    printf("%d",mcd);
    



    return 0;
}   