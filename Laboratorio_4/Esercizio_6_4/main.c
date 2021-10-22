//
// Created by PHOENIX on 17/09/2021.
//

#include <stdio.h>

int main (void){

    float N ;
    int a;
    int counter=0;

    printf ("Inserisci il numero reale N : ");
    scanf ("%f",&N);

    int t=N+1;
    int media=0;

    while (counter<=9 && t>N){
        counter++;
        printf("N:");
        scanf("%d",&a);
        media =(media+a)/counter;
        t=media;
    }

    }


