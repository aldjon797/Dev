#include <stdio.h>

void decimale_Binario(int num) {
    printf("Binario: ");
    while (num > 0) {
        printf("%d", num % 2);
        num /= 2;
    }
    printf("\n");
}

void decimale_Ottale(int num) {
    printf("Ottale: %o\n", num);
}

void decimale_Hex(int num) {
    printf("Esadecimale: %X\n", num);
}

void decimale_ASCII(int num) {
    printf("ASCII: %c\n", num);
}


int main() {
    int scelta, numero_Decimale;

    printf("Menu:\n");
    printf("1. Decimale a Binario\n");
    printf("2. Decimale a Ottale\n");
    printf("3. Decimale a Esadecimale\n");
    printf("4. Decimale a ASCII\n");
   

    printf("Inserisci la tua scelta (1-4): ");
    scanf("%d", &scelta);

    printf("Inserisci il numero decimale: ");
    scanf("%d", &numero_Decimale);

    switch (scelta) {
        case 1:
            decimale_Binario(numero_Decimale);
            break;
        case 2:
            decimale_Ottale(numero_Decimale);
            break;
        case 3:
            decimale_Hex(numero_Decimale);
            break;
        case 4:
            decimale_ASCII(numero_Decimale);
            break;
        default:
            printf("Scelta non valida\n");
            break;
    }

    return 0;
}
