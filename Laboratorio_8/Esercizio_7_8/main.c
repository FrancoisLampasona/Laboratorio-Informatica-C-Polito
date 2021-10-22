//
// Created by PHOENIX on 21/09/2021.
//

#include <stdio.h>
#define R 5
#define C 5

int main (void){

    int V[R][C]={{0,0,0,4,5},{1,2,0,4,5},{1,0,0,4,0},{1,2,3,4,5},{1,0,0,0,0}};
    int flag=0,val,seque,t=0;

    printf("Inserisci il valore da cercare : ");
    scanf("%d",&val);

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

// APPROFONDIMENTO CON LUNGHEZZA DEL VALORE
/*
        printf("Inserisci la lunghezza della sequenza : ");
       scanf("%d",&seque);

       for (int i = 0; i < R; i++) {
           for (int j = 0; j < C - 2; j++) {

               if(V[i][j] == val){
                   for (int k = j ; k <j+seque-1; k++){
                       if (V[i][k]==V[i][k+1]) {
                           flag++;
                       }
                       if (flag==seque-1 && t==0 ) {
                           printf("La sequenza compare nelle riga %d\n", i + 1);
                           t=1;
                       }
                   }
                   flag=0;
               }
           }
           t=0;
       }
       */

}

