/* Un utente introduce da tastiera due numeri interi, chiamati INIZIO e LUN. Il programma
deve stampare una serie di numeri interi consecutivi. La serie inizia al valore INIZIO ed è
lunga LUN elementi.
Esempio:
Inserisci Inizio: 7
Inserisci Lun: 4
La serie è: 7 8 9 10 */

#include <stdio.h>
#include <math.h>

int main(){
int n,l;
int c = 0;
puts("** ** ** << SERIE DI NUM >> ** ** **");
puts("");

    printf("Inserisci INIZIO: ");
    scanf("%d", &n);
    printf("Inserisci lunghezza LUN: ");
    scanf("%d", &l);
    printf("La serie è: ");
    while(l>0){
        l = l-1;
        printf("%d ", n);  
        n = n+1;
    }

printf("\n");
puts("* * * - FINE - ESERCIZIO - * * *");
return 0;

}

