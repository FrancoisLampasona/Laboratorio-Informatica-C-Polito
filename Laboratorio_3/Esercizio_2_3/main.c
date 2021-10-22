//
// Created by PHOENIX on 17/09/2021.
//

#include <stdio.h>
#include <stdlib.h>

int main (void){

    int A,B,C,X;

    A = 2 ;
    B = 4 ;
    X = 3 ;
    C = (A==B);

// Approfondimento 1

   C = ( (A&&B)|| (!B)) &&(!A);

// Approfondimento 2

   C = (A<X<B);


}