/*Si scriva un programma in linguaggio C per calcolare il valore massimo e minimo di un
insieme di N numeri inseriti da tastiera. Il programma deve leggere il valore di N, ed
in seguito deve leggere una sequenza di N numeri. A questo punto il programma deve
stampare il massimo ed il minimo tra i numeri inseriti. */

#include <stdio.h>
int main(){
int n,c=0,numero, max=0, min =0;
puts("** ** ** - MAX & MIN - ** ** **");
puts("");
printf("Inserisci la serie N di numeri: ");
scanf("%d", &n);
printf("Inserisci numero %d: ", c+1);
scanf("%d", &numero);
max = numero;
min = numero;
c=1;
while(c<n){
    printf("Inserisci numero %d: ", c+1);
    scanf("%d", &numero);
    if(numero>max){
        max = numero;
       }
    else if (numero <min)
    {   
        min = numero;
    }
    c++;
 }
printf("Numero massimo della sequenza N: %d\n", max);
printf("Numero massimo della sequenza N: %d\n", min);
puts("* * FINE ESERCIZIO * *");
}

