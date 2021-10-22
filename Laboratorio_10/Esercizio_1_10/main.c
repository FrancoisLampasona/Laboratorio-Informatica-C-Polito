//
// Created by PHOENIX on 21/09/2021.
//


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (int argc,const char * argv[])

{

    if (argc != 3) {
        printf("Errore nel passaggio dei parametri...");
        return 0;
    }

    int primo;
    int secondo;

    primo=atoi(argv[1]);
    secondo=atoi(argv[2]);

    int sum;

    sum = primo + secondo;

    if ((primo<=1000 && primo>=-1000) && (secondo<=1000 && secondo>=1-000)) {
        printf("La somma dei due numeri e' %d",sum);
    }else{
        printf("I numeri vanno fuori l'intervallo..");
    }

    return 0;


}