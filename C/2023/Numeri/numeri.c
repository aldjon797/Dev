#include <stdio.h>

int trova_coppia(int a, int b, int c) {
    if (a == b) {
        return a;
    } else if (a == c) {
        return a;
    } else if (b == c) {
        return b;
    } else {
        return -1;
    }
}

int main() {
    int tripletta1[] = {2, 4, 4};
    int tripletta2[] = {1, 3, 5};

    int coppia1 = trova_coppia(tripletta1[0], tripletta1[1], tripletta1[2]);
    int coppia2 = trova_coppia(tripletta2[0], tripletta2[1], tripletta2[2]);

    if (coppia1 != -1 && coppia2 != -1) {
        if (coppia1 > coppia2) {
            printf("La tripletta 1 contiene la coppia più alta: %d\n", coppia1);
        } else if (coppia2 > coppia1) {
            printf("La tripletta 2 contiene la coppia più alta: %d\n", coppia2);
        } else {
            printf("Entrambe le triplette contengono la stessa coppia: %d\n", coppia1);
        }
    } else if (coppia1 != -1) {
        printf("La tripletta 1 contiene la coppia: %d\n", coppia1);
    } else if (coppia2 != -1) {
        printf("La tripletta 2 contiene la coppia: %d\n", coppia2);
    } else {
        printf("Nessuna delle due triplette contiene una coppia.\n");
    }

    return 0;
}
