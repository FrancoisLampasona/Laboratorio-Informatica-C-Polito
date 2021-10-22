//
// Created by PHOENIX on 21/09/2021.
//

#include <stdio.h>
#include <string.h>
#define N 20

typedef struct University{
    char materia[N];
    char nomeprof[N];
    char cognomeprof[N];
    int  periodo;
    int  crediti;
    int  superamento;
}Uni;

int main (int argc, const char * argv[]){

    Uni materia[N];
    int max,indice[N]={0},k=0;
    int maxapp,ind[N];
    int count=0;

    if(argc!=2){
        printf("Errore passaggio parametri\n");
        return 0;
    }

    FILE *f;

    f= fopen(argv[1],"r");

    if(f==NULL){
        printf("Errore apertura file\n");
        return 1;
    }

    for (int i = 0; !feof(f); ++i) {
        fscanf(f,"%s %s %s %d %d %d",materia[i].materia,materia[i].nomeprof,materia[i].cognomeprof,&materia[i].periodo,&materia[i].crediti,&materia[i].superamento);
        count++;
    }

    fclose(f);

 // A)

    max=materia[k].crediti;
    indice[k]=0;

    for (int i = 0; i < count; i++) {

        if(max<materia[i].crediti && max != materia[i].crediti){
            max=materia[i].crediti;
            k=0;
            indice[k] = i;

        }else if (max == materia[i].crediti) {
            k++;
            indice[k] = i;
        }
    }

     for (int j = 0; j<k+1; j++) {
           printf("La materia che assegna piu crediti e': %s\n",materia[indice[j]].materia);
     }

 // B)

 max=0,k=0;

    for (int i = 1; i < 5; ++i) {
        for (int j = 0; j <count ; ++j) {
            if(i==materia[j].periodo){
                maxapp=materia[j].superamento;
                if (max<maxapp){
                    k=0;
                    max=maxapp;
                    ind[k]=j;
                }else if (max==maxapp){
                    k++;
                    ind[k]=j;
                }
            }
        }
        if(max!=0) {
            for (int j = 0; j<k+1; j++) {
                if(j==0){
                    printf("Nel periodo %d la materia piu difficile da superare e' : %s\n", i, materia[ind[j]].materia);
                }else{
                    printf("Nel periodo %d altra materia difficile da superare e' : %s\n", i, materia[ind[j]].materia);
                }
            }
        }
        max=0;
    }

 // C)

    char cognomeprofe[N];

    printf("Inserisci il cognome di un professore:");
    scanf("%s",cognomeprofe);
    int somma=0,conta=0;
    float media=0;

    for (int i = 0; i < count; ++i) {
        if (strcmp(cognomeprofe,materia[i].cognomeprof)==0){
            somma+=materia[i].crediti;
            media+=materia[i].superamento;
            conta++;
        }
    }

    printf("La somma dei crediti assegnati dalle materie che insegna il/la Prof %s e' : %d\n",cognomeprofe,somma);
    printf("La media di superamento degli esami tenuti dal/la Prof %s e' : %.2f\n",cognomeprofe,media/conta);


}