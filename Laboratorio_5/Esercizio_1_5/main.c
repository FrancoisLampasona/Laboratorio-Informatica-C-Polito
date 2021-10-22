//
// Created by PHOENIX on 17/09/2021.
//

#include <stdio.h>

int main (void){

    int A;
    int B;
    int MCD;

    A=96;
    B=68;
    MCD = A%B;

    while(MCD!=0) {

        A=B;
        B=MCD;
        MCD= A%B;

    }

    printf("L'MCD e' %d",B);

}