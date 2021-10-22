//
// Created by PHOENIX on 21/09/2021.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define N 60
#define M 5

int main (void){

    char V[N];
    char V1[M][N];
    int C[N]={0};
    float numcar = 0;

    gets(V);

    int n = sscanf(V,"%s %s %s %s %s",V1[0],V1[1],V1[2],V1[3],V1[4]);

    printf("La stringa contiene : %d parole\n",n);

    for (int i = 0; V[i] !='\0' ; i++) {

        if(isalpha(V[i])!=0){
            numcar++;
        }
    }

    printf("La lunghezza media delle parole e' %.2f\n",numcar/n);

    for (int i = 0; i < n; ++i) {
        C[strlen(V1[i])]++;
    }

    for (int i = 0; i < N; i++) {
        if(C[i]!=0)
        printf("%d parole da %d caratteri\n",C[i],i);
    }


}