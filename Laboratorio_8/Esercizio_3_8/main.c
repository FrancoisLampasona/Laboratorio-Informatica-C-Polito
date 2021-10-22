//
// Created by PHOENIX on 21/09/2021.
//

#include <stdio.h>
#include <stdlib.h>
#define N 20

int main (void){

    char V[N];
    char V1[N];
    char intervallo [N];
    int h,m,h1,m1;
    int orario,orario1;

    printf("Inserisci la prima data : \n");
    gets(V);


    if (sscanf(V,"%d:%d",&h,&m)==2 && (h<=24 && h>=0 & m<59 && m>0) ) {
    }else{
        printf("Errore nella prima battitura\n");
        return 0;
    }

    printf("Inserisci la seconda data: \n");
    gets(V1);

    if (sscanf(V1,"%d:%d",&h1,&m1)==2 && (h1<=24 && h1>=0 & m1<59 && m1>0) ) {
    }else{
        printf("Errore nella seconda battitura\n");
        return 0;
    }

    if (h<h1 && m<m1) {

        printf("L'orario della prima riga e' precedente alla seconda\n");

        orario = (h*60)+ m;
        orario1 =(h1*60)+m1;

        int diff;
        diff=(orario-orario1);

        if(diff<0){
            diff=-diff;
        }

        itoa(diff,intervallo,10);

    } else{
        return 0;
    }

    printf("Ci sono %s minuti di differenza",intervallo);

}