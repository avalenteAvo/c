/*
Dato un numero reale positivo Y immesso da tastiera, si scriva un programma in linguaggio C 
che determini qual è il massimo numero intero positivo X tale per cui sia valida la
relazione X^X ≤ Y
*/

#include <stdio.h>
#include <math.h>

int main(){
float y, esp,x=0;
puts("** ** ** - DISEQUAZIONE - ** ** **");
puts("");
printf("Inserisci un numero y: ");
scanf("%f", &y);
esp =0;
while(esp<=y){
    x=x+1;
    esp = pow(x,x);
    }
printf("Massimo numero intero positivo X per cui è valida la relazione X^X <= Y\n");
printf("x: %.2f ** x^x: %.2f\n", x-1,pow(x-1,x-1));

puts("");
puts("* * * - FINE - ESERCIZIO - * * *");
return 0;

}
