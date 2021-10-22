//
// Created by PHOENIX on 21/09/2021.
//

#include <stdio.h>
#define N 8

int main (void){

    int matrix[N][N];
    int val=0,count=0;
    int i=0,j=0;

    while (count!=N/2){
        for (; i<N-count ; i++) {
            for (;j<N-count; j++) {
                val+=1;
                matrix[i][j]=val;
            }
            j--;
        }

        i--;
        j--;

        for (; i!=0+count ; i--) {
            for (;j!=-1+count; j--) {
                val+=1;
                matrix[i][j]=val;
            }
            j++;
        }

        count++;
        j=count,i=count,val=0;
    }

    for (int k = 0; k < N; k++) {
        for (int h = 0; h <N ; h++) {
            printf("%d ",matrix[k][h]);
        }
        printf("\n");
    }

}