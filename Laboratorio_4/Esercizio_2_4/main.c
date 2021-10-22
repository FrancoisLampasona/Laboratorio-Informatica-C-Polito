//
// Created by PHOENIX on 17/09/2021.
//

#include <stdio.h>
#include <stdlib.h>

int main (void){

    int giorno,mese,anno;

    printf("Inserisci gg/mm/anno : \n");
    scanf("%d/%d/%d",&giorno,&mese,&anno);

    switch (mese) {
        case 1 : printf("%d Gennaio %d\n",giorno,anno); break;
        case 2 : printf("%d Febbraio %d\n",giorno,anno); break;
        case 3 : printf("%d Marzo %d\n",giorno,anno); break;
        case 4 : printf("%d Aprile %d\n",giorno,anno); break;
        case 5 : printf("%d Maggio %d\n",giorno,anno); break;
        case 6 : printf("%d Giugno %d\n",giorno,anno); break;
        case 7 : printf("%d Luglio %d\n",giorno,anno); break;
        case 8 : printf("%d Agosto %d\n",giorno,anno); break;
        case 9 : printf("%d Settembre %d\n",giorno,anno); break;
        case 10 : printf("%d Ottobre %d\n",giorno,anno); break;
        case 11 : printf("%d Novembre %d\n",giorno,anno); break;
        case 12 : printf("%d Dicembre %d\n",giorno,anno); break;
        default: printf("Inserimento del mese non corretto\n");break;
    }


}