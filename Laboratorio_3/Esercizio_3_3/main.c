//
// Created by PHOENIX on 17/09/2021.
//

#include <stdio.h>
#include <stdlib.h>
#define K 10

int main (void){

    int a,b,c,d;
    float x;

    scanf("%d %d %d %d",&a,&b,&c,&d);

    x = (-d*K)/(a+(b*c));

    printf("Il risultato e' %f",x);

}