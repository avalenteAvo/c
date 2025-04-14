/*
Si scriva un programma in linguaggio C per il calcolo dei quadrati perfetti per una sequen-
za di numeri. Il programma deve prima leggere un numero inserito da tastiera, e quindi
stampare i primi quadrati perfetti sino al quadrato del numero.
*/
#include <stdio.h>
int main(){
int n,c=0;
puts("** ** ** - QUADRATI PERFETTI - ** ** **");
puts("");
printf("Inserisci la sequenza N di quadrati perfetti che vuoi visualizzare: ");
scanf("%d", &n);
c++;
while(c<n){
    printf(" %d *", c*c);
    c++;
    }
printf("\n");
puts("* * * - FINE - ESERCIZIO - * * *");
return 0;
}

