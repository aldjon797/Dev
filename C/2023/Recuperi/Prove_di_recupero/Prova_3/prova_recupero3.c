#include <stdio.h>

int main(){
    int n, f_tot,f1, f2;

    printf("Inserisci quanti numeri visualizzare: ");
    scanf("%d", &n);

    f1 = 0;
    f2 = 1;

    printf("%d %d", f1, f2);

	for(int i=2; i<=n; i++){
        f_tot = f1 + f2;
        f1 = f2;
        f2 = f_tot;

        printf("%d ", f);
    }
	return 0;
}