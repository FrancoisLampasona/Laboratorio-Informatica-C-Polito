//
// Created by PHOENIX on 21/09/2021.
//

#include <stdio.h>
#include <ctype.h>

int main (void){

     int a;
     int in=0,alf=0,mai=0,deci=0,spa=0,par=0,h=0;

   do {

       a = getchar();

       in++;

       if(isalpha(a)!=0){
           alf++;

           if(alf==1)
               par++;

           if (h==1)
               h=2;

           if(isupper(a)!=0)
               mai++;

       }else if(isdigit(a)!=0){
           deci++;

           if (h==1)
               h=3;

       }else if(isspace(a)!=0){
           spa++;
           h=1;
       }

       if (h==2){
           par++;
           h=0;
       }

   }while(a!='\n');

    printf("Numero di caratteri %d\n",in);
    printf("Numero di caratteri alfabetici %d\n",alf);
    printf("Numero di caratteri maiuscoli %d\n",mai);
    printf("Numero di cifre decimali %d\n",deci);
    printf("Numero di spazi %d\n",spa);
    printf("Numero di parole %d\n",par);


}