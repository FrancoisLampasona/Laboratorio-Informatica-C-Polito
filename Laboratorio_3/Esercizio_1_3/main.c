//
// Created by PHOENIX on 17/09/2021.
//
#include <stdio.h>
#include <stdlib.h>

int main (void){

    int int_1,int_2;
    float float_1,float_2;

    printf("Inserisci due numeri interi : \n");
    scanf("%d %d",&int_1,&int_2);

    printf("Inserisci due numeri in vigola mobile : \n");
    scanf("%f %f",&float_1,&float_2);

    printf("Variable     Value\n");
    printf("int_1 int_2 %5d %5d\n",int_1,int_2);
    printf("float_1 %5.2f\n",float_1);
    printf("float_2 %.3f\n",float_2);



}
