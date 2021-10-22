//
// Created by PHOENIX on 01/04/2021.
//

#include <stdio.h>
#include <stdlib.h>

int main (void){

    int c,f;
    char a;

    do {
        printf("Inserisci una lettera : \n");
        scanf("%s",&a);
    } while (a !='C' && a !='F' );

    if (a=='C'){
        printf("Inserisci i gradi : \n");
        scanf("%d",&c);
        f=(c*9/5)+32;
    }else{
        printf("Inserisci i gradi : \n");
        scanf("%d",&f);
        c=(f-32)*5/9;
    }
    printf("I gradi in Celsius sono : %d \n",c);
    printf("I gradi in Fahrenheit sono : %d \n",f);

}