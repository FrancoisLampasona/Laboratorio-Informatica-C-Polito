//
// Created by PHOENIX on 17/09/2021.
//

#include <stdio.h>
#define N 10

int main (void){

    int V [N];
    int Vp [N]={0};
    int val;
    int p=0;

    for (int i = 0; i < N; i++) {
        printf("Inserisci i numeri dentro il vettore :");
        scanf("%d",&V[i]);

        if (V[i]<0){
            i = N;
            V[i]=0;
        }
    }

    for (int i = 0; i <N; i++) {

        printf("Inserisci il valore da cercare :");
        scanf("%d",&val);

        if (val>=0){
            for (int j = 0; j < N; j++) {

                if (V[j]==val){
                    Vp[p]=j;
                    p++;
                }

            }
        }else{
            i=N;
        }

    }

    printf("\n");

    for (int i = 0; i < N; i++) {
        if (Vp[i]!=0){
            printf("Il valore carcato si trova in posizione/nello posizioni : %d\n",Vp[i]);
        }

    }



}