/*
Si realizzi un programma che, dati due valori B (numero reale, detto ‘base’) ed E (numero
intero positivo, detto ‘esponente’), calcoli e stampi il valore reale di BE (base elevato ad
esponente). Non si utilizzi la funzione pow() ma si adotti il metodo delle moltiplicazioni
successive.
*/
#include <stdio.h>
#include <math.h>
int main(){
int e,c=0;
float b,a=1;
puts("** ** ** - ELEVAMENTO A POTENZA - ** ** **");
printf("Inserisci la base B: ");
scanf("%f", &b);
printf("Inserisci l'esponente E: ");
scanf("%d", &e);
while(c<e){
    
    a = a * b;
    c++;
    }
printf("Il valore della potenza B^E e' pari a: %.2f\n", a);
puts("* * * - FINE - ESERCIZIO - * * *");
return 0;
}
