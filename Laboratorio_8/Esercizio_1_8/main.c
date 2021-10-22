//
// Created by PHOENIX on 21/09/2021.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define N 150


int main (void){

    char V[N];
    char V1[N];
    int alfa=0,numer=0,carat=0,i=0;

    gets(V);

    do {

        if(isalpha(V[i]))
            alfa++;

        if (isdigit(V[i]))
            numer++;

        carat++;
        i++;

    }while( V[i] !='\0');

    printf("La stringa e' lunga :%d\n",carat);
    printf("Ci sono %d caratteri alfabetici e %d caratteri numerici\n",alfa,numer);

    gets(V1);

    if (strstr(V,V1)!=0) {
        printf("La seconda stringa e' contenuta nella prima\n");
    }

}