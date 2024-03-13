#include <stdio.h>
#include <string.h>

int confrontaStringhe(char stringa1[], char stringa2[]) {
    if ((stringa1, stringa2) < 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char stringa1[100], stringa2[100];

    printf("Inserisci la prima stringa: ");
    scanf("%s", stringa1);

    printf("Inserisci la seconda stringa: ");
    scanf("%s", stringa2);

    if (confrontaStringhe(stringa1, stringa2)) {
        printf("La prima stringa precede la seconda in ordine alfabetico.\n");
    } else {
        printf("La prima stringa non precede la seconda in ordine alfabetico.\n");
    }

    return 0;
}
