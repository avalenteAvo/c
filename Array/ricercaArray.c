#include <stdio.h>
int main (void){
int n,i,num;
int c = 0;
do{
printf("Quanti elementi vuoi nell'array? (Max 30): ");
scanf("%d", &n);
}while(n > 30);
int array[n];
for(i = 0; i < n; i++){
printf("Inserisci l'elemento %d dell'array di dimensione %d: ", i+1,n);
scanf("%d", &array[i]);}
printf("Inserisci ora il numero che devo cercare nell'array! -> ");
scanf("%d", &num);
for(i = 0; i < n; i++){
	if(num == array[i]) c++; }
if(c != 0) printf("Il numero <%d> cercato e' presente nell'array %d volte\n", num,c);
else printf("Il numero <%d> cercato non e' presente nell'array\n", num);
return 0;
}
