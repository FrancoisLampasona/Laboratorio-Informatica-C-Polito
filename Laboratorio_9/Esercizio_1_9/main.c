//
// Created by PHOENIX on 21/09/2021.
//

#include <stdio.h>
#define R 5
#define C 11
#define PIETRA '*'

int main (void){

    char palude [R][C]=
            {'*','*','.','*','.','*','.','.','.','.','*',
             '.','.','*','.','.','.','.','.','*','*','.',
             '*','.','.','.','*','.','*','.','.','.','.',
             '.','*','.','*','.','*','.','*','.','*','.',
             '.','.','*','.','*','.','.','.','*','.','*'};

    int r,c,k,i;
    int trovato;

    for (i=0; i<R ;i++){

        r = i ;
        c = 0;

        if (palude[r][c]==PIETRA){
            palude[r][c]='X';

            while(c<(C-1)){

                trovato=0;
                for (k=-1;k<=1;k++){
                    if ((r+k)>=0 && (r+k)<R){
                        if(palude[r+k][c+1]==PIETRA){
                            palude[r+k][c+1]='X';
                            trovato=1;
                            r=r+k;
                            c=c+1;
                        }
                    }
                }

                if (!trovato){
                    printf("Percorso interrotto");
                    break;
                }

            }

            if (c==(C-1)){
                printf("Abbiamo completato il percorso \n");
                break;
            }


        }else{
            printf("La riga inizia con del fango\n");
        }

    }

    for (int j = 0; j < R; j++) {

        for (int l = 0; l < C; l++) {
            printf("%c",palude[j][l]);
        }
        printf("\n");
    }

}