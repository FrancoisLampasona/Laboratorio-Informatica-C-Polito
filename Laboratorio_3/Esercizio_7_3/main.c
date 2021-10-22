//
// Created by PHOENIX on 17/09/2021.
//

#include <stdio.h>
#include <stdlib.h>
#define N 100

//Senza Cicli

int main (void){

int a,b,c,d;
int max;
int min;
int differenza_max;

 a = 101;
 b = 45;
 c = 16;
 d = 17;

    if (a<N && b<N & c<N && d<N){

        if (a<b && a<c && a<d){
            min=a;
        }
        if (b<a && b<c && b<d){
            min=b;
        }
        if (c<b && c<a && c<d){
            min=c;
        }
        if (d<b && d<c && d<a){
            min=d;
        }
        if (a>b && a>c && a>d){
            max=a;
        }
        if (b>a && b>c && b>d){
            max=b;
        }
        if (c>b && c>b && c>d){
            max=c;
        }
        if (d>b && d>c && d>a){
            max=d;
        }

        differenza_max=max-min;
        printf("La differenza massima e' %d",differenza_max);

    } else {
        printf("C'e' stato un errore \n");
        a=0;
        b=0;
        c=0;
        d=0;
    }

}