//
// Created by PHOENIX on 21/09/2021.
//

#include <stdio.h>
#define N 5
float avgVect (int V[],int n);
int upperLimit (int V[],int n,float limit);

int main (void){
    int V[N]={1,2,3,4,5};
    float media;
    int nval;
    float limit = 0;

    media=(avgVect(V,N));
    nval= upperLimit(V,N,limit);

    printf("La media e' : %.2f\n",media);
    printf("I valori che superano il limite sono : %d",nval);

}

float avgVect (int V[],int n){

    float media=0;

    for (int i = 0; i < n; i++) {
        media = media + V[i];
    }
    media=media/5;

    return media;
}

int upperLimit (int V[],int n,float limit){

    int val=0;

    for (int i = 0; i <n ; i++) {
        if(V[i]>limit){
            val++;
        }
    }

    return val;

}