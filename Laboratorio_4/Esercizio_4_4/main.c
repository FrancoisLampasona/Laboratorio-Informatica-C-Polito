//
// Created by PHOENIX on 17/09/2021.
//

#include <stdio.h>
#include <stdlib.h>

int main (void){

    int N = 9;
    int j;
    int k;
    int i = 0;

    for (;N>0;j++) {

        for (;i<=j;i++) {

            for (k=0; k<N; k++) {

                printf("*");

            }
            j=0;
            printf("\n");
            N = N - 2;
        }
        printf(" ");
    }




}