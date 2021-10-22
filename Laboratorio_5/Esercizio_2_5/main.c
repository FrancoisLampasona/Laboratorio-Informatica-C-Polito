//
// Created by PHOENIX on 17/09/2021.
//

#include <stdio.h>
#define N 10


int main (void){

    int A [N] = {0,1,2,3,4,5,6,7,8,9};
    float media=0;
    int max;
    int counter;
    float somma=0;

    for (int a=0 ;a<N;a++){

        printf(" %d",A[a]);

        if (A[a]<A[N-a]){
            max=A[N-a];
            counter=N-a;
        }else{
            max=A[a];
            counter = a;
        }

        somma =somma+A[a];

    }

    media=somma/10;

printf("\n %d %d %.2f",max,counter,media);

}