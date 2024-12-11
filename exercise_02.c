/*
-----------------------------------------------------------------------------------------------------
Scrivere un programma che legge da terminale (stdin) i dati di N veicoli 
(valore costante pari a 10), costituiti dalla targa e dal numero di chilometri percorsi. 
(Suggerimento: la targa è una stringa del tipo “AD234DR”)
a. Stampare le vetture nuove (che hanno percorso meno di 10000 km)
b. Stampare la percorrenza media delle prime 5 vetture
c. Dato il numero di targa (letto da terminale), stampare il numero di chilometri percorsi.

Esempio:
ABCD123         40000
WRTYU43         1000
QWUYR66         80000
12REBHD         1500
RTHHG65         3000
GERGS43         70000
DGERJ56         64000
1345DGR         21340
WTKG656         90000
GDGJ879         3400
-----------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <string.h>
#define N 10
int main(void){
	struct Veicolo{
		char Targa[7];
		int Km;
	}Veicoli[N];
	
	int i;
	printf("Inserisci la Targa e il Numero di Km del Veicolo: \n");
	for(i=0; i<N; i++){
		scanf("%s",Veicoli[i].Targa);
		scanf("%d",&Veicoli[i].Km);
	}
	printf("\n");
	
	for(i=0; i<N; i++){
		printf("%s\t\t",Veicoli[i].Targa);
		printf("%d\t\t",Veicoli[i].Km);
		printf("\n");
	}
	printf("\n");
	
	// Punto A
	printf("I Veicoli che hanno meno di 10000Km sono: \n");
	for(i=0; i<N; i++){
		if(Veicoli[i].Km<10000){
			printf("%s\t\t",Veicoli[i].Targa);
			printf("%d\t\t",Veicoli[i].Km);
			printf("\n");
		}
	}
	
	// Punto B
	int Somma = 0;
	float Media = 0;
	for(i=0; i<5; i++){
		Somma = Somma + Veicoli[i].Km;
	}
	Media = Somma / 5;
	printf("\nLa Media dei Km percorsi tra i primi 5 Veicoli e': %1.f\n",Media);	
	printf("\n");	
	
	// Punto C
	char TargaDaCercare[7];
	int Risultato = 1;
	printf("Inserisci la Targa da cercare: ");
	scanf("%s",TargaDaCercare);
	for(i=0; i<N; i++){
		Risultato = strcmp(TargaDaCercare,Veicoli[i].Targa);
		if(Risultato==0){
			printf("I rispettivi Km sono: %d\t\t",Veicoli[i].Km);
			printf("\n");
	    }
	}	
}

