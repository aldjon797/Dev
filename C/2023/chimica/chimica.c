#include <stdio.h>

int calcola_molocule(int idrogeno, int ossigeno) {
    
    if (idrogeno >= 2 && ossigeno >= 1) {
        int aqua = idrogeno / 2;
        
        if (aqua <= ossigeno) {
            return aqua;
        } else {
            return ossigeno; 
        }
    } else {
        return 0; 
    }
}

int main() {
    
    int idrogeno, ossigeno;
    
    printf("Inserisci il numero di atomi di idrogeno: ");
    scanf("%d", &idrogeno);
    
    printf("Inserisci il numero di atomi di ossigeno: ");
    scanf("%d", &ossigeno);
    
    int aqua = calcola_molocule(idrogeno, ossigeno);
    printf("Il numero massimo di molecole di acqua che si possono formare è: %d\n", aqua);

    return 0;
}
