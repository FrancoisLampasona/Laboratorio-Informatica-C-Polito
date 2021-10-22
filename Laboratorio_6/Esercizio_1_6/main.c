//
// Created by PHOENIX on 21/09/2021.
//

#include <stdio.h>
#define N 2

int main (void){

    int V[N]={1,1};
    int t = 0;

    for (int i = 0; i < N/2; i++) {
        if (V[i]==V[N-i-1]){
            t++;
        }
    }

    if (t==N/2){
        printf("La successione e' palindroma");
    } else{
        printf("La succesione non e' palindroma");
    }


}