//
// Created by PHOENIX on 21/09/2021.
//

#include <stdio.h>
#define N 5
int power (int base, int esponente);

int main (){

     int a;
     int b;
     int D;

     printf("Inserisci il valore della base :");
     scanf("%d",&a);

    printf("Inserisci il valore dell'esponente :");
    scanf("%d",&b);

     D = power(a,b);

     printf("Il risulato e' %d",D);

}

int power (int base, int esponente){

    int i, s=1;
    for (i = 0; i < esponente; ++i)
        s *= base;
    return s;

}