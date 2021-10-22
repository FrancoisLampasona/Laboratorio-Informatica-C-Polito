//
// Created by PHOENIX on 21/09/2021.
//

#include <stdio.h>
#include <ctype.h>

int main (void){

    char a,b;

    printf("Inserisci il contenuto delle due variabili : ");
    scanf("%c %c",&a,&b);

    if (isalpha(a)!=0 && isalpha(b)!=0){
        if(a==b) {
            printf("%c %c",a,b);
        }else if (a>b){
            printf("%c %c",b,a);
        }else if (a<b){
            printf("%c %c",a,b);
        }
    } else{
        if (isdigit(a)!=0 || isdigit(b)!=0){
            printf("Almeno uno dei caratteri e' una cifra");
        }
    }


}