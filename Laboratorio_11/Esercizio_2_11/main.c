//
// Created by PHOENIX on 21/09/2021.
//

#include <stdio.h>
#include <string.h>
#define N 5

typedef struct nomi{
    char nome[20];
    char cognome[20];
    char fisso[20];
    char mobile[20];
}Nomi;

int main (void){

    Nomi persone[N];
    int scelta=0;

    while(scelta!=3) {

        printf("1) Inserisci persone nell'elenco\n");
        printf("2) Stampa l'elenco\n");
        printf("3) Termina il programma\n");
        printf("Inserisci scelta :");
        scanf("%d", &scelta);

        if (scelta == 1) {

            for (int i = 0; i < N; i++) {

                printf("\nNumero %d\n", i + 1);
                printf("Inserisci il Nome :");
                scanf("%s", persone[i].nome);
                printf("Inserisci il Cognome :");
                scanf("%s", persone[i].cognome);

                if(i>0) {
                    for (int j = 0; j < i; j++) {
                        if (strcmp(persone[i].nome, persone[j].nome)==0 && strcmp(persone[i].cognome,persone[j].cognome)==0){
                            printf("Ci sono due persone con lo stesso nome e cognome\n");
                        }
                    }
                }

                printf("Inserisci il Numero fisso :");
                scanf("%s", persone[i].fisso);
                printf("Inserisci il Numero di cellulare :");
                scanf("%s", persone[i].mobile);
                printf("\n");
            }

        } else if (scelta == 2) {

            printf("Elenco :\n");

            for (int i = 0; i < N; i++) {
                printf("%d:\n", i + 1);
                printf("Nome: %s\n", persone[i].nome);
                printf("Cognome: %s\n", persone[i].cognome);
                printf("Fisso: %s\n", persone[i].fisso);
                printf("Cellulare: %s\n", persone[i].mobile);
                printf("\n");
            }

        } else {
            printf("\nProgramma Terminato");
            return 0;
        }
    }
}