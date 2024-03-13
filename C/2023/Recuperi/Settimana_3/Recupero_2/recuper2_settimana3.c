#include <stdio.h>
int main(void) {
int i;
float salto;
float minsalto, maxsalto;
float mediasalto;
float somma = 0;

for (i = 0; i < 5; i++){
do{
printf("Inserisci %d° salto: ", i+1);
scanf("%f", &salto);
} while(salto < 0);
somma += salto; //sommo i salti per calcolare
if (i == 0){
minsalto = salto;
maxsalto = salto;
}
else {
if (salto < minsalto) {
minsalto = salto;
}
if (salto > maxsalto) {
maxsalto = salto;
  }
}
}



mediasalto = somma / 5.0;
printf("Il salto piu' corto e' stato di %.2f m\n", minsalto);
printf("Il salto piu' lungo e' stato di %.2f m\n", maxsalto);
printf("la media del salto è %.2f m\n",mediasalto);

return 0;
}