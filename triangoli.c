/* Si scriva un programma in linguaggio C che legga da tastiera i valori delle lunghezze dei
tre lati di un triangolo (detti A, B e C), e determini:
• se il triangolo è equilatero
• se il triangolo è isoscele
• se il triangolo è scaleno
• se il triangolo è rettangolo. */

#include <stdio.h>
int main(){
int a,b,c;
printf("Inserisci il lato a: ");
scanf("%d", &a);
printf("Inserisci il lato b: ");
scanf("%d", &b);
printf("Inserisci il lato c: ");
scanf("%d", &c);
if(a == b && a==c) // && operatore relazionale AND
{
    printf("Il triangolo e' equilatero\n");
}
if(a == b || a == c || b == c ) // || operatore relazionale OR
{
    printf("Il triangolo e' isoscele\n");
}
if(a != b && a != c && c != b)
{
    printf("Il triangolo e' scaleno\n");
}
if(c*c == (a*a)+(b*b) || a*a == (b*b)+(c*c) || b*b == (a*a)+(c*c))
{
    printf("Il triangolo e' rettangolo\n");
}
}


