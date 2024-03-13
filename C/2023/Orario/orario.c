#include <stdio.h>


int convsec(int , int , int);
int main() {

    //inizializzo le variabili
    int ore1, minuti1, secondi1;
    int ore2, minuti2, secondi2;
    int differenza;
    //richiedo in input il primo orario
    printf("Inserisci il primo orario (ore minuti secondi): ");
    scanf("%d %d %d", &ore1, &minuti1, &secondi1);

    //richiedo in input il secondo orario
    printf("Inserisci il secondo orario (ore minuti secondi): ");
    scanf("%d %d %d", &ore2, &minuti2, &secondi2);

    differenza = calc_dif (ore1, minuti1, secondi1, ore2, minuti2, secondi2 );
    printf("La differenza in secondi tra i due orari è: %d secondi\n", differenza);
    return 0;
    }
    int calc_dif (int a, int b, int c, int d, int e, int f) {
      int differenza;
      int totaleSecondiOrario1 = a * 3600 + b * 60 +c;
      int totaleSecondiOrario2 = d * 3600 + e * 60 + f;
        differenza = totaleSecondiOrario1 - totaleSecondiOrario2;
      return differenza;
}


