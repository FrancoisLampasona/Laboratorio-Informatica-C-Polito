//
// Created by PHOENIX on 21/09/2021.
//

#include <stdio.h>
#include <stdlib.h>
#define R 5

int main (int argc , const char *argv[]){

    int V[R][R];
    int flag=0;

    if (argc!=3){
        printf("Errore nel passaggio dei parametri");
        return 0;
    }

    int val=atoi(argv[2]);

    FILE * f;

    f=fopen(argv[1],"r");

    if (f==NULL){
        printf("Errore nell'apertura del file ");
        return 1;
    }

    for (int i = 0; i < R ; ++i) {
        for (int j = 0; j < R; ++j) {
            fscanf(f,"%d",&V[i][j]);
        }
    }

    fclose(f);

    printf("\n");

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < R - 2; j++) {
            if (V[i][j] == val && (V[i][j+1] == V[i][j+2]) && (V[i][j] == V[i][j+1])) {
                flag++;
                if (flag==1) {
                    printf("La sequenza compare nelle riga %d\n", i + 1);
                }
            }
        }
        flag=0;
    }

    for (int j = 0; j < R; j++) {
        for (int i = 0; i < R-2; i++) {
            if (V[i][j] == val && (V[i+1][j] == V[i+2][j]) && (V[i][j] == V[i+1][j])) {
                flag++;
                if (flag==1) {
                    printf("La sequenza compare nelle colonna %d\n", j + 1);
                }
            }
        }
        flag=0;
    }

}