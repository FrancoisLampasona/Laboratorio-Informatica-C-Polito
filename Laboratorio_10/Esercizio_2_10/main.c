//
// Created by PHOENIX on 21/09/2021.
//

#include <stdio.h>
#include <stdlib.h>

int main (int argc,const char * argv[]){

    if (argc!=4){
        printf("Errore nell'inserimento dei parametri");
        return 0;
    }

    int val1 = atoi(argv[1]);
    int val2 = atoi(argv[2]);
    const char *ch  = argv[3];

    switch (*ch) {
        case 'a':
            printf("La somma e' %d",val1+val2);
            break;
        case 'b':
            printf("La differenza e' %d",val1-val2);
            break;
        case 'c':
            printf("Il prodotto e' %d",val1*val2);
            break;
        case 'd':
            printf("La divisione e' %d",val1/val2);
            break;
        default:
            printf("Inserimento di lettera sbagliata\n");
            return 1;
    }


}