//
// Created by PHOENIX on 21/09/2021.
//

#include <stdio.h>
#define N 5

int power (int base,int esponente);

int main (void){

    int Vb[N]={1,2,3,4,5};
    int Ve[N]={1,2,3,4,5};
    int Vre[N];

    for (int i = 0; i < N; ++i) {
        Vre[i] = power(Vb[i],Ve[i]);

    }

    for (int i = 0; i < N; ++i) {
        printf(" %d",Vre[i]);
    }

}

int power(int base,int esponente){

    int c=1;

    for (int i = 0; i < esponente; ++i) {
        c*=base;
    }

    return c;

}