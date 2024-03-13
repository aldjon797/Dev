#include <stdio.h>
#include <stdlib.h>


int Bisestile(int anno) {
    if ((anno % 4 == 0 && anno % 100 != 0) || anno % 400 == 0) {
        return 1; 
    } else {
        return 0; 
    }
}


int giorni_in_mese(int mese, int anno) {
    int giorni[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (mese == 2 && Bisestile(anno)) {
        return 29; 
    } else {
        return giorni[mese - 1];
    }
}

int differenza_Date(int giorno1, int mese1, int anno1, int giorno2, int mese2, int anno2) {
    int giorni_totali1 = giorno1;
    int giorni_totali2 = giorno2;

    for (int i = 1; i < mese1; i++) {
        giorni_totali1 += giorni_in_mese(i, anno1);
    }

    for (int i = 1; i < mese2; i++) {
        giorni_totali2 += giorni_in_mese(i, anno2);
    }

    for (int i = anno1; i < anno2; i++) {
        if (Bisestile(i)) {
            giorni_totali2 += 366;
        } else {
            giorni_totali2 += 365;
        }
    }

    return giorni_totali2 - giorni_totali1;
}

int main() {
    
    int giorno1, mese1, anno1, giorno2, mese2, anno2;

    printf("Inserisci la prima data (gg mm aaaa): ");
    scanf("%d %d %d", &giorno1, &mese1, &anno1);

    printf("Inserisci la seconda data (gg mm aaaa): ");
    scanf("%d %d %d", &giorno2, &mese2, &anno2);

    int differenza = differenza_Date(giorno1, mese1, anno1, giorno2, mese2, anno2);

    printf("La differenza in giorni tra le due date è: %d giorni\n", differenza);

    return 0;
}
