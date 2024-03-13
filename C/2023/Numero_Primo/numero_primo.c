#include <stdio.h>

int main() {
    int num, flag = 0;

    printf("Inserisci un numero: ");
    scanf("%d", &num);

    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            flag = 1;
            break;
        }
    }


        if (flag == 0){ 
            printf("%d non è un numero primo.", num);
       } else{ 
            printf("%d  è un numero primo.", num);
       }

    return 0;
}
