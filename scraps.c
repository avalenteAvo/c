/*
* Un giocatore lancia due dadi. Ogni dado ha sei facce. 
* Queste facce contengono 1,2,3,4,5 e 6 puntini. Dopo che i dadi si sono fermati, si calcolerà la somma dei puntini sulle due * facce rivolte verso l’alto. Nel caso la somma fosse 7 o 11 al primo tiro, il giocatore avrebbe vinto. Nel caso che la somma * fosse 2,3 o 12 al primo tiro (detta “craps”), il giocatore avrebbe perso (ovverosia avrebbe vinto il “banco”). Nel caso la * somma fosse 4, 5,6,8,9 o 10 al primo tiro, allora quella
* somma diventerebbe il “punteggio” del giocatore. Per vincere, si deve continuare a
* lanciare i dadi fino a “ottenere il vostro punteggio”. Il giocatore pederebbe
* qualora realizzasse un 7 prima di ottenere il proprio punteggio.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dado1 = 0;
int dado2 = 0;

int lanciaDadi(){
	int somma;
	dado1 = 1 + (rand()%6);
	dado2 = 1 + (rand()%6);
	somma = dado1 + dado2;
	return somma;
}

int main(void){
	
	int risultato = 0;
	srand(time(NULL));
	risultato = lanciaDadi();
	printf("Player rolled %d + %d = %d\n",dado1,dado2,risultato);
	switch(risultato){
		case 7:
		case 11:
		printf("Player wins!\n"); break;
		case 2:
		case 3:
		case 12:
		printf("Player loses!\n"); break;
		case 4:
		case 5:			
		case 6:		
		case 8:		
		case 9:		
		case 10:
		printf("Point is %d\n", risultato);		
		int rilancia = 0;
		while(rilancia!=risultato)
			{
			rilancia = lanciaDadi();
			printf("Player rolled %d + %d = %d\n",dado1,dado2,rilancia);	
				if(rilancia == 7){ printf("Player loses!\n"); break;}
				else if(rilancia == risultato) printf("Player wins!\n");
			}

	}
}
