/*
Si scriva un programma in linguaggio C che acquisisca un numero intero positivo N da
tastiera e stampi il valore del fattoriale di N.
Suggerimento. Si ricorda che il fattoriale di un numero è il prodotto di tutti i numeri
compresi tra 1 ed N.
N! = 1 · 2 · 3 ·    · (N − 1) · N
Inoltre 0! = 1.
*/
#include <stdio.h>
#include <math.h>
int main(){
puts("** ** ** - FATTORIALE - ** ** **");
long int n,c=0,a=1;
printf("Inserisci numero N: ");
scanf("%ld", &n);
if(n==0){
    printf("Fattoriale del numero %ld!= 1\n",n);    
    }
else
  {
    c++;
    while(c<=n){
    a = a *c;
    c++;
    }  
    printf("Fattoriale del numero %ld!= %ld\n",n,a);
  }
puts("* * * - FINE - ESERCIZIO - * * *");
return 0;
}

