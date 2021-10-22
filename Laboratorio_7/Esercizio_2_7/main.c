//
// Created by PHOENIX on 21/09/2021.
//

#include <stdio.h>
#define N 5

void mult(int * V,int n, int x);

int main (void){

    int V[N]={1,2,3,4,5};
    int x = 3;

    mult(V,N,x);

    for (int i = 0; i < N; ++i) {
        printf(" %d",V[i]);
    }

}

void mult(int * V,int n, int x){

    for (int i = 0; i<n;i++){
        V[i]=V[i]*x;
    }

    return 0 ;
}