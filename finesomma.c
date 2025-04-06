/*
Si scriva un programma in linguaggio C che legga da tastiera una serie di numeri interi
fino a quando la somma di tutti i numeri introdotti fino a quel momento non supera il
valore 1000. A quel punto, il programma stampa il valore del prodotto di tutti i numeri
inseriti
*/

#include <stdio.h>
int main(){
int n,a=0,c=1;
puts("** ** ** - FINE - SOMMA - ** ** **");
puts("");
do{
    printf("Inserisci numero: ");
    scanf("%d",&n);
    a = a + n;
    c = c*n;
} while(a<=1000);
printf("Il valore del prodotto dei numeri inseriti e': %d\n", c);
puts("");
puts("* * * - FINE - ESERCIZIO - * * *");
return 0;

}
