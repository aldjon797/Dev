#include <stdio.h>

// Funzione per calcolare il MCD utilizzando l'algoritmo di Euclide
int calcolaMCD(int a, int b) {
    int resto;
    
    while (b != 0) {
        resto = a % b;
        a = b;
       b = resto;
    }
    
    return a;
}

int main() {
    float numero1, numero2;
   
    // Input dei due numeri
    printf("Inserisci il primo numero: ");
    scanf("%f", &numero1);

    printf("Inserisci il secondo numero: ");
    scanf("%f", &numero2);

    float mcd = calcolaMCD(numero1, numero2);
    printf("Il MCD di %.2f e %.2f = %.2f\n", numero1, numero2, mcd);

    return 0;
}
