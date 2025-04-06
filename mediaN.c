/*
Si scriva un programma in linguaggio C per calcolare la media aritmetica di una serie
di numeri inseriti da tastiera. L’introduzione di un valore particolare pari a “0” indica il
termine del caricamento dei dati.
*/

#include <stdio.h>
#include <math.h>

int main(){
float n,m=0;
int c = 0;
puts("** ** ** - MEDIA ARITMETICA - ** ** **");
puts("");

printf("Inserisci un numero: ");
scanf("%f", &n);
    while(n!=0){
        m = m +n;
        c = c +1;
        printf("Inserisci un numero: ");
        scanf("%f", &n);
    }

printf("La media dei numeri inseriti è pari a: %.2f", m/c);

puts("* * * - FINE - ESERCIZIO - * * *");
return 0;

}
