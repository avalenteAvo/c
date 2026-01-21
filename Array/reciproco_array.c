/*Write a program that will read five values of type double from the keyboard
* and store them in an array. Calculate the reciprocal of each value (the reciprocal of
* value x is 1.0/x) and store it in a separate array. Output the values of the reciprocals and
* calculate and output the sum of the reciprocals.
*/
#include <stdio.h>
int main (void){
float array[5];
float array_reciprocal[5];
int i,j;
for(i = 0; i < 5; i++){ 
	printf("Elemento %d: ", i+1);
	scanf("%f", &array[i]);
	}	
for(i = 0; i < 5; i++){
		array_reciprocal[i]  =  1.0 / array[i];
	}
printf("* * VALORE DELL'ARRAY RECIPROCO * *\n");
for(i = 0; i < 5; i++){
printf("ELEMENTO RECIPROCO %d: %.2f\n", i+1, array_reciprocal[i]);
} }
