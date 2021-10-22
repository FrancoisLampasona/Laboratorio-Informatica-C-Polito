//
// Created by PHOENIX on 21/09/2021.
//

#include <stdio.h>
#include <ctype.h>
#define N 100

int main (void){

    char V[N];

    printf("Inserisci il testo :\n");
    gets(V);

    V[0]= toupper(V[0]);

    for (int i = 0; i < N; i++) {

        if (isspace(V[i])){
            V[i+1]=toupper(V[i+1]);
        }
    }

    puts(V);

}