//
// Created by PHOENIX on 17/09/2021.
//

#include <stdio.h>
#define N 8

int main (void){

    int v[N]={1,2,3,5,2,6,7,3};

    for (int i=0;i<N;i++){

        if(v[i]<v[i+1] && v[i+1]<v[i+2]){

            printf("La serie è : %d %d %d\n",v[i],v[i+1],v[i+2]);
            printf("La posizione è : %d\n",i);
        }

    }


}


