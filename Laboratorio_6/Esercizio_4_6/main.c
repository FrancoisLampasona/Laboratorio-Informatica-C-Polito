//
// Created by PHOENIX on 21/09/2021.
//

#include <stdio.h>
#define N 5

int main (void){

    int V[N];
    int a;
    int t = 0;

    for ( int i = 0; i<N ; i++){

        printf("Inserisci i valori nel vettore:");
        scanf("%d",&V[i]);
    }

    for (int i = N-1 ; i>0 ; i--) {
        for (int j = 0 ; j<N-t; j++) {

            if(V[i]<V[j]){

                a = V[i];
                V[i]=V[j];
                V[j]=a;

            }

        }
       t++;
    }

    for (int i = 0; i < N; i++) {
        printf(" %d",V[i]);
    }


}