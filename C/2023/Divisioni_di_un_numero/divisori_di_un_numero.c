#include <stdio.h>

int main(){

    int num;
    int c =0;

    printf("inserisci un numero : ");
    scanf("%d",&num);

    for(int i = 1;i <= num ; i++){
        if(num%i == 0){
           c++;
        }
    }
printf("il numero %d ha %d divisori",num,c);

    return 0;
}