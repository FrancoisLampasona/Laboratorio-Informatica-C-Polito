//
// Created by PHOENIX on 21/09/2021.
//

#include <stdio.h>
#include <string.h>
#define R 4
#define C 60

int main (void){

  char V[R][C];
  int Vp[C];
  int tot,qua,flag=0;

    for (int i = 0; i < R-1; ++i) {
        printf("Inserisi il prodotto numero %d :\n",i+1);
        scanf("%s %d",V[i],&Vp[i]);
    }

    do {

        printf("Inserisci il nome del prodotto da cercare e il prezzo :\n");
        scanf("%s %d",V[3],&qua);

        for (int i = 0; i < R-1; i++) {

            if(strcmp(V[3],V[i])==0){
                tot=qua*Vp[i];
                flag=1;
            }
        }

    }while(flag==0);

    printf("Il prezzo totale e' : %d",tot);

}