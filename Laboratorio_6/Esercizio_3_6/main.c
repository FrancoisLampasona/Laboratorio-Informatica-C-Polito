//
// Created by PHOENIX on 21/09/2021.
//

#include <stdio.h>
#define N 5

int main (void){

    int V[N]={1,2,1,3,2};
    int t = 0;
    int flag =0;

    for (int i = 0; i < N; i++) {
       flag=-1;
        for (int j = 0; j < N; j++) {
            if (V[i] == V[j] && i != j) {
                t++;
                if (j<i) {
                    flag = 0;
                }else if (flag==-1) {
                    printf("Il numero %d e' ripetuto : %d\n", V[i], t);
                    flag = 1;
            }
        }
            t = 0;
        }
    }


}