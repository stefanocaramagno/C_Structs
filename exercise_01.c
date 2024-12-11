/*
-----------------------------------------------------------------------------------------------------
Scrivere un programma in ANSI C che legge da terminale (stdin) i dati di N studenti (valore 
costante pari a 5), costituiti dal cognome (stringa di lunghezza massima 20), nome (stringa di 
lunghezza massima 20), voto e stampa su terminale (stdout) la media aritmetica dei voti:
a. Utilizzando gli stessi dati, dopo avere acquisito le informazioni degli N studenti, inserire 
	da terminale il cognome (stringa) e stampare il contenuto del record oppure la stringa 
	“non trovato”. (Suggerimento: utilizzare la funzione strcmp(s, t) che confronta il 
	contenuto di due stringhe)
b. Utilizzando gli stessi dati, dopo avere acquisito le informazioni degli N studenti, stampare 
	il numero di studenti il cui voto è maggiore di 27
c. Utilizzando gli stessi dati, dopo avere acquisito le informazioni degli N studenti, stampare 
	il contenuto dei record i cui il cognome inizia con il carattere ‘A’. (Suggerimento: una 
	stringa è un vettore di caratteri quindi per accedere al primo elemento è sufficiente usare 
	la sintassi dei vettori).
-----------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <string.h>
#define N 5
int main(void){
	struct Studente{
		char Cognome[20];
		char Nome[20];
		float Voto;
	} Studenti[N];
	
	int i;
	
	for(i=0; i<N; i++){
		printf("Inserisci il Cognome, il Nome e il Voto dello Studente: \n");
		scanf(" %s",Studenti[i].Cognome);
		scanf(" %s",&Studenti[i].Nome);
		scanf(" %f",&Studenti[i].Voto);
	}
	
	printf("\nStampo i valori inseriti nella Struttura: \n");
	for(i=0; i<N; i++){
		printf("%s\t\t",Studenti[i].Cognome);
		printf("%s\t\t",Studenti[i].Nome);
		printf("%.1f\t\t",Studenti[i].Voto);
		printf("\n");
	}

	float Somma = 0;
	for(i=0; i<N; i++){
		Somma = Somma + Studenti[i].Voto;
	}
	float Media = Somma / N;
	printf("\nLa Media dei Voti di Tutti gli Studenti e': %1.f\n",Media);
	
	// Punto A
	char Cognome[20];
	printf("\nInserisci un Cognome da cercare: ");
	scanf("%s",Cognome);
	
	int Risultato; 
	char Trovato = 'F';
	for(i=0; i<N; i++){
		Risultato = strcmp (Cognome, Studenti[i].Cognome);
		if (Risultato == 0){
		    printf("%s\t\t",Studenti[i].Cognome);
			printf("%s\t\t",Studenti[i].Nome);
			printf("%.1f\t\t",Studenti[i].Voto);
			printf("\n");
			Trovato = 'V';
		}
	}	
	if(Trovato == 'F'){
		printf("NON TROVATO");
	}
	
	// Punto B
	int Contatore = 0;
	for(i=0; i<N; i++){
		if(Studenti[i].Voto>27){
			Contatore++;
		}
	}
	printf("\nIl Numero di Studenti con un Voto superiore a 27 e': %d\n",Contatore);
	
	// Punto C
	printf("\nGli studenti che hanno Cognome che inizia con la lettera A sono: \n");
	for(i=0; i<N; i++){
		if(Studenti[i].Cognome[0]=='A'){
		    printf("%s\t\t",Studenti[i].Cognome);
			printf("%s\t\t",Studenti[i].Nome);
			printf("%.1f\t\t",Studenti[i].Voto);
			printf("\n");
		}			
	}
}


