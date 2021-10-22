//
// Created by PHOENIX on 21/09/2021.
//
#include <stdio.h>
#define N 30

int main (void){

    int V[N];
    int numero,resto,quoziente;
    int count = 0,t=0;

    // Base che vada da 2 a N-1

    printf("Inserisci un numero :");
    scanf("%d",&numero);
    int f = numero;

    if (numero>2 && numero<30){

    for (int i = 2; i != f-1; i++,t=0,count=0) {

        numero=f;

        do {
            quoziente=numero/i;
            if (quoziente==0){
                resto=numero;
                V[count]=resto;
                count++;
            }else {
                resto = numero % i;
                numero = quoziente;
                V[count]= resto;
                count++;
            }
        } while (quoziente!=0);


//Controllo sul vettore di palindromicità e stampa :


        for (int j = 0 ; j < count/2; j++) {
            if (V[j]==V[count-j-1]){
                t++;
            }
        }

        if (t==count/2){

            printf("Il numero %d in base %d e':",f,i);

            for (int w=0;w<count;w++)
                printf(" %d",V[w]);

            printf("\n");
            printf("Ed e' palindromo\n");

        }

    }

    }else
        printf("Il numero inserito non rispetta il range");

}