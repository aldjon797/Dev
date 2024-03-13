#include <stdio.h>

int main (){
    int num;
    int i = 0;
    int c = 0;
    int num2;
    printf("inserisci quandi numeri vuoi inserire :");
    scanf("%d",&num2);
  
    while ( i <= num2){
     printf("\ninserisci eta -->",i + 1);
     scanf("%d",&num);
     if( num >= 18){
        printf("\nmaggiorene");
        c++;

     }
     else {
        printf("\nminorene");
        i++;
     }
        
    }
    printf("\nin tutto ci sonno  %d persone maggioreni",c);

    return 0;
}