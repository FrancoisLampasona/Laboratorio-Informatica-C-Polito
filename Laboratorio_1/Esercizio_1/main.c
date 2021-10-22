//
// Created by PHOENIX on 01/04/2021.
//

#include <stdio.h>

int main (void){

    int a;
    int h=0;
    int sum;

    printf("Inserisci un numero intero\n");
    scanf("%d",&a);

    int b=a;

    do {
        sum=a%b;
        b--;
        if (sum==0){
        h++;
        }

    }while(b!=0);

     if (h>2){
     printf("Il numero non e' primo");
     }else{
     printf("Il numero e' primo");
    }

}
