#include <stdio.h>

int main(){

    int numero;  
    int a = 0 , b = 1 , c;


    printf("inserisci quando numeri fibonacci vuoi :");
    scanf("%d",&numero);

    printf("secueca di ficonacci di %d -->",numero);

    for ( int i = 0; i <numero ; i++){
        printf("%d",a);
        

        c = a + b;
        a = b ;
        b = c;


    }


    
    return 0;
}