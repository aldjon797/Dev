#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define rows 3
#define columns 4

int main(){

    int matrice1[rows][columns];
    int matrice2[rows][columns];
    int matrice3[rows][columns];

     srand(time(0));
    for (int i = 0; i < rows; i++) {
        for (int k = 0; k < columns; k++) {
            matrice1[i][k] = rand() % 9; 
            matrice2[i][k] = rand() % 9;
        }
    }

    printf("Matrice 1:\n");
    numeri(matrice1);

    printf("\nMatrice 2:\n");
    numeri(matrice2);

    
    for (int i = 0; i < rows; i++) {
        for (int k = 0; k < columns; k++) {
            matrice3[i][k] = matrice1[i][k] + matrice2[i][k];
        }
    }

    printf("\nMatrice Somma:\n");
    numeri(matrice3);

    return 0;
}

void numeri(int matrice[][columns]) {
    for (int i = 0; i < rows; i++) {
        for (int k = 0; k < columns; k++) {
            printf("%d ", matrice[i][k]);
        }
        printf("\n");
    }
}