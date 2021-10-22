//
// Created by PHOENIX on 17/09/2021.
//

#include <stdio.h>
#include <stdlib.h>

int main (void){

    int a,b,c;
    int delta;

    a = 2;
    b = 3;
    c = -4;

    delta = b*b-4*a*c;

    if (delta>0){
        printf("L'equazione ha due soluzioni Reali distinte");
    }else if (delta<0){
        printf("L'equazione non ha soluzioni Reali");
    }else if (delta==0){
        printf("L'equazione ha due soluzioni Reali coincidenti");
    }

}