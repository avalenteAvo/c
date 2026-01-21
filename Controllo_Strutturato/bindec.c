/*
Si scriva un programma in linguaggio C che converta un numero binario in un numero
decimale. Il numero binario è rappresentato su N bit, e il valore di N è inserito da ta-
stiera. L’utente inserisce le cifre del numero binario un bit alla volta, partendo dal bit
meno significativo (ossia dal bit di peso 2^0). Il programma visualizzerà il numero decimale
corrispondente.
Suggerimento. Per calcolare le potenze di 2 utilizzare la funzione pow, includendo la libreria
math.h. Ad esempio per calcolare 25, si scriverà pow(2,5). In generale, data una base a, per
calcolare y = ab, si scrive y = pow(a,b) includendo la libreria math.h.
*/
#include <stdio.h>
#include <math.h>
int main(){
int n,b,c=0, a=0;
puts("** ** ** - BINARIO to DECIMALE - ** ** **");
printf("Inserisci gli N bit: ");
scanf("%d", &n);
while(c<n)
    {
    printf("inserisci il bit in posizione %d: ", c);
    scanf("%d", &b);
    if(b>1){ printf("ERRORE, il numero in posizione %d non e' binario'\n", c); break;}
    a  = a + (pow(2,c)*b);
    c++; 
}
printf("Il decimale corrispondente e' %d\n", a);
puts("* * * - FINE - ESERCIZIO - * * *");
return 0;
}

