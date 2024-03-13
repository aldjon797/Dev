#include <stdio.h>
#include <math.h>

int Quadrato(int numero) {
    int radice = sqrt(numero);
    
    if (radice * radice == numero) {
        return radice;
    } else {
        return -1;
    }
}

int main() {
    int numero_verifica;
    
    printf("Inserisci un numero intero positivo: ");
    scanf("%d", &numero_verifica);
    
    int risultato = Quadrato(numero_verifica);
    
    if (risultato != -1) {
        printf("Il numero %d è il quadrato perfetto di %d.\n", numero_verifica, risultato);
    } else {
        printf("Il numero %d non è un quadrato perfetto.\n", numero_verifica);
    }
    
    return 0;
}
