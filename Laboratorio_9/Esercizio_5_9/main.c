//
// Created by PHOENIX on 21/09/2021.
//

#include <stdio.h>
#define N 10

int main (void){

    int topo[N][N];
    char nomefile[N];
    int j,k,max;

    printf("Inserisci il nome del file :");
    scanf("%s",nomefile);

    FILE *f;
    f=fopen(nomefile,"r");
    if(f==NULL){
        printf("Errore nell'apertura file");
        return 1;
    }

    for(int i=0;i<N;i++) {
        for(int s=0;s<N;s++){
            fscanf(f,"%d",&topo[i][s]);
        }
    }

    fclose(f);

    j=2;
    k=6;
    max=topo[j][k];
    printf("%d ",max);

    for(int t=j-1;t<=j+1;t++){

        for (int s=k-1; s<=k+1; s++) {
            if(max<topo[t][s]){
                max=topo[t][s];
                printf("%d ",max);
                j=t;
                k=s;
            }
        }

    }

}