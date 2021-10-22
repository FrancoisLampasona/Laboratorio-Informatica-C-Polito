//
// Created by PHOENIX on 21/09/2021.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define N 100

int main (void){

    char V[N];
    int parole=0;

    gets(V);

    if(isalpha(V[0]))
        parole++;

    for (int i = 0; V[i]!='\0'; i++) {

        V[i]=toupper(V[i]);

        if (isalnum(V[i])==0){
            V[i]='_';
        }

        if (isdigit(V[i])!=0){
            V[i]='*';
        }

        if(V[i]=='_' && V[i+1]!='_'){
            parole++;
        }

    }

    puts(V);

    printf("\nCi sono %d",parole);

}