//
// Created by PHOENIX on 14/09/2021.
//

#include <stdio.h>
#include <stdlib.h>

int main (void){

    float tensione;

    printf("Inserisci valore di tensione da 0 a 100 mV : ");
    scanf("%f", &tensione);

    if (tensione <= 20){
        float temperatura= 15/20 * tensione;
        printf("Temperatura = %f\n", temperatura);
    }
    else if ( (tensione> 20 ) || (tensione <= 55) )
    {
        float temperatura = ((tensione - 20)/35) * 12 + 15;
        printf("Temperatura = %f\n", temperatura);
    }
    else if ( (tensione> 55) || (tensione <= 100) )
    {
        float temperatura = ((tensione-55)/45)* 8 + 27 ;
        printf("Temperatura = %f\n", temperatura);
    }


}

