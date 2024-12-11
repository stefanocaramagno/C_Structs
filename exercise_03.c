/*
--------------------------------------------------------------------------------------------------
Scrivere un programma in linguaggio C che implementa un vettore di strutture di N elementi (con N 
definito come costante), in cui ogni struttura contiene un numero di matricola ed il nome di uno 
studente. Caricare i dati da terminale e stampare tutto il contenuto del vettore.
--------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
int main(void){
	
	const int N=5;
	
	struct Studente{
		int Matricola[10];
		char Nome[30];	
	}Scheda[N];
	
	int i;
	
	for(i=0;i<N;i++){
		printf("Inserisci Numero di Matricola dello Studente %d: ",i);
		scanf("%s",&Scheda[i].Matricola); //Inserire un valore di 10 Cifre per avere una formattazione adeguata nella visualizzazione del programma.
		
		printf("Inserisci il Nome dello Studente %d: ",i);
		scanf("%s",&Scheda[i].Nome);
		
	}
	printf("\nStampo la Struttura contenente i Dati degli Studenti: \n\n");
	printf("\tMatricola\tNome\n\n");
	for(i=0;i<N;i++){
		printf("\t%s\t%s\t\n",Scheda[i].Matricola,Scheda[i].Nome);
	}

}

