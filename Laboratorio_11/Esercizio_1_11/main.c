//
// Created by PHOENIX on 21/09/2021.
//

#include <stdio.h>
#include <math.h>
#define N 4

struct coordinate{
    int x;
    int y;
};

int main (int argc , const char * argv[]){


    if (argc!=2){
        printf("Errore nel passaggio dei parametri\n");
        return 0;
    }

    const char *c=argv[1];
    struct coordinate coordinate[N];
    float segm=0,min;
    int i=0;


    for (int i = 0; i < N; ++i) {
        printf("Inserisci la coordinata X :");
        scanf("%d",&coordinate[i].x);

        printf("Inserisci la coordinata Y :");
        scanf("%d",&coordinate[i].y);
    }

    if (*c=='m'){

        for (i = 0; i < N-1; ++i) {
            segm += (float) sqrt(pow(coordinate[i].x-coordinate[i+1].x,2)+ pow(coordinate[i].y-coordinate[i+1].y,2));
        }
        printf("%.2f",segm);

    }else if (*c=='a'){

        segm = (float) sqrt(pow(coordinate[i].x-coordinate[i+1].x,2)+ pow(coordinate[i].y-coordinate[i+1].y,2));
        min=segm;

        for (i = 0; i < N-2; ++i) {
            segm = (float) sqrt(pow(coordinate[i].x-coordinate[i+1].x,2)+ pow(coordinate[i].y-coordinate[i+1].y,2));
            if(min<segm){
                min=segm;
            }
        }

        printf("%.2f",segm);

    }else{
        printf("Passati parametri sbagliati\n");
        return 1;
    }


}