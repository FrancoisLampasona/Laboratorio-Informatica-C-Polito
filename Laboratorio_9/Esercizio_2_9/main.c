//
// Created by PHOENIX on 21/09/2021.
//

#include <stdio.h>
#include <string.h>
#define N 5
#define M 50

int insert_product(char warehouse[][M],float price[],int n, char new_product[],float price_new_product);
void print_all(char warehouse[][M],float price[],int n,float*avg,float *max);
int update_product(char warehouse[][M], float price[], int n, char product[], float new_price);
int remove_product(char warehouse[][M], float price[], int n, char old_product[]);

int main (void){

    char warehouse[N][M];
    float price[N]={-2},price2,medio,max;
    char random[M];
    int scelta,c,flag=0,n=0;

    while (flag!=1) {

        printf("\nScegli 3 possibili operazioni : \n");
        printf("1) Inserimento di un nuovo prodotto e relativo prezzo\n");
        printf("2) Stampa listino attuale (elenco dei prodotti con i relativi prezzi)\n");
        printf("3) Uscita dal programma\n");
        printf("4) Aggiornamento prezzo prodotto\n");
        printf("5) Rimozione prodotto\n");

        scanf("%d",&scelta);

        switch (scelta) {
            case 1:
                printf("Inserisci il nome del prodotto :");
                scanf("%s %f",random,&price2);
                c = insert_product(warehouse,price,n,random,price2);
                switch (c) {
                    case 0:
                        printf("Il prodotto e' gia presente\n");
                        break;
                    case 1:
                        printf("il prodotto e' stato inserito con successo\n");
                        n++;
                        break;
                    case 2:
                        printf("Il lestino e' pieno\n");
                        break;
                }
                break;
            case 2:
                print_all(warehouse,price,n,&medio,&max);
                printf("Media: %.2f\n"
                       "Massimo: %.2f\n", medio, max);
                break;
            case 3:
                flag=1;
                return 0;
            case 4:
                update_product(warehouse,price,n,random,price2);
                break;
            case 5:
                remove_product(warehouse,price,n,random);
                n--;
                break;
            default:
                break;
        }
    }
}

int insert_product(char warehouse[][M],float price[],int n, char new_product[],float price_new_product){

    int i = 0;

    if (n==N){
        return 2;
    }

    for (; i < n ; i++) {
        if(strcmp(new_product,warehouse[i])==0){
            return 0;
        }
    }
    strcpy(warehouse[n],new_product);
    price[n]=price_new_product;
    return 1;

}

void print_all(char warehouse[][M],float price[],int n,float*avg,float *max){

    *max = 0;
    float sum=0;
    int i=0;

    if (n==0){
        printf("il listino e' vuoto\n");
    }else {
        for (i = 0; i < n; i++) {

            printf("%s : %.2f\n", warehouse[i], price[i]);

            if (price[i] > *max) {
                *max = price[i];
            }
            sum += price[i];
        }
    }
    *avg=sum/i;

}

int update_product(char warehouse[][M], float price[], int n, char product[], float new_price){

    int i = 0;

    printf("Inserisci il nome del prodotto da aggiornare:");
    scanf("%s",product);
    printf("Inserisci il relativo prezzo:");
    scanf("%f",&new_price);

    for (i=0;i<n;i++){
        if(strcmp(product,warehouse[i])==0){
            strcpy(warehouse[i],product);
            price[i]=new_price;
            return 1;
        }
    }
    printf("Il prodotto non e' nel listino\n");
    return 0;
}

int remove_product(char warehouse[][M], float price[], int n, char old_product[]){

    int i = 0;

    printf("Inserisci il nome del prodotto da eliminare :");
    scanf("%s",old_product);

    for (i=0;i<n;i++){
        if(strcmp(old_product,warehouse[i])==0){
            strcpy(warehouse[i],"");
            price[i]=-2;
            return 1;
        }
    }
    printf("Il prodotto non e' nel listino\n");
    return 0;
}