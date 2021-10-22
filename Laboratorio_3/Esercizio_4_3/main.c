//
// Created by PHOENIX on 17/09/2021.
//

#include <stdio.h>
#include <stdlib.h>

#define Price_Base 100
#define Car_Agiunt 40
#define Anni_Poss 20

int main (void){

    int price,features,months,years;

    printf("Inserisci le features dello smartphone : \n");
    scanf("%d",&features);

    printf("Inserisci per quanti anni e' stato posseduto: \n");
    scanf("%d",&years);

    months = years * 12;
    price = Price_Base + Car_Agiunt*features -20*months;

    printf("Il prezzo dello smartphone e' : %d\n",price);


}