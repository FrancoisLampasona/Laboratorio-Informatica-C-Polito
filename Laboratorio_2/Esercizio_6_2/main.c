//
// Created by PHOENIX on 14/09/2021.
//

#include <stdio.h>
#include <stdlib.h>

int main (void){

    int numero;

    printf("Inserisci un numero: ");
    scanf("%d",&numero);

    if (numero<0){
        numero=-numero;
    }

    printf("Il modulo del numero e' %d",numero);
}