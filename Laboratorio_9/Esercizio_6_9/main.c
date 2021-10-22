//
// Created by PHOENIX on 21/09/2021.
//

#include <stdio.h>
#define N 10
#define M 10

void set (int m[][N], int h, int n, int i, int j,int r);


int main (){

    int Matrix[N][M];
    int m,n,c,r;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            Matrix[i][j]=1;
        }
    }

    printf("Inserisci le dimensioni 'm' e 'n' della sotto matrice:");
    scanf("%d %d",&m,&n);

    printf("Inserisci le cordinate del primo elemento da cui partire:");
    scanf("%d %d",&r,&c);

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            printf("%d",Matrix[i][j]);
        }
        printf("\n");
    }

    if(m<M && n<N){

        int i = r;
        int j = c;

        set(Matrix,m,n,i,j,r);

    }else{

        printf("Sei uscito fuori dalla matrice\n");
        return 0;

    }


    printf("\n\n");

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            printf("%d",Matrix[i][j]);
        }
        printf("\n");
    }

}


void set (int m[][N], int h, int n, int i, int j,int r){

    for (; i < h; i++) {
        for (;j < n; j++) {
            m[i][j]=0;
        }
        j=r;
    }
}