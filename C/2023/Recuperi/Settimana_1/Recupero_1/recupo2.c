#include <stdio.h>

int main (){
    int num;
    int i = 0;
    int c = 0;
    
   
  
    while ( 1){
     printf("\ninserisci eta -->");
     scanf("%d",&num);
     if(num <= 0){
          printf("\nin tutto ci sonno  %d persone maggioreni",c);
     }
     break;
     if( num >= 18){
        printf("\nmaggiorene");
        c++;

     }
     else 
        printf("\nminorene");
        i++;
     
        
    }
    printf("\nin tutto ci sonno  %d persone maggioreni",c);

    return 0;
}