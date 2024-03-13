#include <stdio.h>

int vocali(char i){

    if(i=='a'||i=='e'||i=='i'||i=='o'||i=='u'||i=='A'||i=='E'||i=='I'||i=='U'||i=='O'){
        return i;
    }else{
        return 0;
    }
}

int main(){
    int lunghezza_1;
    int lunghezza_2;
    int vocali_1 = 1; 
    int vocali_2 = 0;
    char carattere;

    printf("inserisci quanti lettere vuoi inserire in prima parola :");
    scanf("%d",&lunghezza_1);

    printf("inserisci quanti lettere vuoi inserire per la seconda parola: ");
    scanf("%d",&lunghezza_2);

    printf("inserisci la prima parola :\n ");
    for(int i = 0; i< lunghezza_1;i++){
        scanf("%c",&carattere);
        if(vocali(carattere)){
            vocali_1++;
        }
    }
    printf("inserisci la seconda parola :\n");
    for(int i = 0;i<lunghezza_2;i++){
        scanf("%c",&carattere);
        if(vocali(carattere)){
            vocali_2++;
        }
    }
    printf("in prima parola ci sono %d parole vocali\n",vocali_1);
    printf("in seconda parola ci sono %d parole vocali\n ",vocali_2);

    return 0;
}