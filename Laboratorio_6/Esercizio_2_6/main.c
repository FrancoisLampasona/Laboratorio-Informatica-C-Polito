//
// Created by PHOENIX on 21/09/2021.
//

#include <stdio.h>
#define N 5
int main (void){

    int V1[N]={12,3,12,13,29};
    int V2[N]={12,29,13,3,12};
    int t = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (V1[i]==V2[j]){
                t++;
                j=N;
            }
        }
    }

    if (t==N){
        printf("I vettori contengono gli stessi valori ");
    } else{
        printf("I vettori non contengono gli stessi valori ");
    }

}