//
// Created by PHOENIX on 01/04/2021.
//
#include <stdio.h>

int main (void){

    int operand1;
    int operand2;
    int result;

    printf("Inserisci un numero intero\n");
    scanf("%d",&operand1);

    printf("Inserisci un secondo numero intero\n");
    scanf("%d",&operand2);

    result=operand1+operand2;

    printf("Il risultato e' %d\n",result);

}