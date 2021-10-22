//
// Created by PHOENIX on 17/09/2021.
//

#include <stdio.h>
#define N 10


int main (void){

    int V1[N]={0};
    int V2[N]={0};
    int tmp;

    for (int i = 0; i < N; i++) {

        printf("Inserisci i numeri nei vettori : ");
        scanf("%d",&tmp);

        if (tmp>0 || (tmp<0 && (tmp%3)==0) ){
            V1[i]=tmp;
        } else if (tmp<0 && tmp%3!=0 && tmp%2!=0 ){
            V2[i]=tmp;
        }

    }

    for (int k = 0; k <N ; k++) {
        printf("%d ",V1[k]);
    }

    printf("\n");

    for (int k = 0; k <N ; k++) {
        printf("%d ",V2[k]);
    }


}