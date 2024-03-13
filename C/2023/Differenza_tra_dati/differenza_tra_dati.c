#include <stdio.h>

// Funzione per verificare se un anno è bisestile
int isBisestile(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return 1; // Anno bisestile
    } else {
        return 0; // Anno non bisestile
    }
}

// Funzione per calcolare i giorni in un dato mese
int giorniInMese(int month, int year) {
    int giorni[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (month == 2 && isBisestile(year)) {
        return 29; // Febbraio in un anno bisestile
    } else {
        return giorni[month - 1];
    }
}

// Funzione per calcolare la differenza in giorni tra due date
int differenzaDate(int giorno1, int mese1, int anno1, int giorno2, int mese2, int anno2) {
    int giorniTotali1 = giorno1;
    int giorniTotali2 = giorno2;

    for (int i = 1; i < mese1; i++) {
        giorniTotali1 += giorniInMese(i, anno1);
    }

    for (int i = 1; i < mese2; i++) {
        giorniTotali2 += giorniInMese(i, anno2);
    }

    for (int i = anno1; i < anno2; i++) {
        if (isBisestile(i)) {
            giorniTotali2 += 366;
        } else {
            giorniTotali2 += 365;
        }
    }

    return giorniTotali2 - giorniTotali1;
}

int main() {
    int giorno1, mese1, anno1, giorno2, mese2, anno2;

    printf("Inserisci la prima data (gg mm aaaa): ");
    scanf("%d %d %d", &giorno1, &mese1, &anno1);

    printf("Inserisci la seconda data (gg mm aaaa): ");
    scanf("%d %d %d", &giorno2, &mese2, &anno2);

    int differenza = differenzaDate(giorno1, mese1, anno1, giorno2, mese2, anno2);

    printf("La differenza in giorni tra le due date è: %d giorni\n", differenza);

    return 0;
}
