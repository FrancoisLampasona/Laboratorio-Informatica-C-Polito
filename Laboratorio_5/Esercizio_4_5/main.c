//
// Created by PHOENIX on 17/09/2021.
//

#include <stdio.h>
#define N 8

int main (void){

    int V[N];
    int a , b ;
    int i = 0;
    int t = 0;


    printf("Inserisci i numeri nel vettore :");
    scanf("%d",&V[i]);
    a = V[i];
    i++;

    printf("Inserisci i numeri nel vettore :");
    scanf("%d",&V[i]);
    b = V[i];
    i++;

    if (a<b){

        for (; i < N; i++) {
            printf("Inserisci i numeri nel vettore :");
            scanf("%d",&V[i]);

            if (V[i]>=b){
                t++;
                b=V[i];
            } else{
                i=N;
                t++;
            }
        }
    }
    else{
        for (; i < N; i++) {
            printf("Inserisci i numeri nel vettore :");
            scanf("%d",&V[i]);

            if (b>=V[i]){
                t++;
                b=V[i];
            } else{
                i=N;
                t++;
            }
        }

    }

    printf("\n");
    printf("Il vettore contiene : ");

    for (int j = 0; j <= t+1; j++) {
        printf(" %d",V[j]);
    }



}