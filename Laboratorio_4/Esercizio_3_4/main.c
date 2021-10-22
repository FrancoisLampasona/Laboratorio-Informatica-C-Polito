//
// Created by PHOENIX on 17/09/2021.
//

#include <stdio.h>
#include <stdlib.h>

int main (void){

    int a;
    int somma=0;

    while (a!=0){
        printf("Inserisci un numero :");
        scanf("%d",&a);
        somma = somma + a;
    }
    printf("La somma e' %d",somma);

}