//
// Created by PHOENIX on 21/09/2021.
//

#include <stdio.h>
#include <limits.h>
#define TRUE 1
#define FALSE 0
#define OVERFLOW 2

int verifica(int a , int b, int c);

int main (void){

    int d;

    for (int c = 1; c < 100 ; c++) {

        for (int b = 1; b < 100;  b++) {

            for (int a = 1; a < 100;  a++) {

                d=verifica(a,b,c);

                if(d==TRUE){
                    printf("A:%d B:%d C:%d sono una terna pitagorica\n",a,b,c);

                }else if (d==2){
                    printf("C'e' stato overflow\n");
                }

            }

        }

    }

}

int verifica (int a , int b, int c){

    if(c*c==(a*a)+(b*b) && (c>a && c>b) && (a>b)) {
        return TRUE;
    }else if ((a*a)+(b*b)>=INT_MAX) {
        return OVERFLOW;
    }else{
        return FALSE;
    }

}