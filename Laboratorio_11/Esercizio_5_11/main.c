//
// Created by PHOENIX on 21/09/2021.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100

typedef struct list {
char nome[20];
int punteggio;
}list;


int main (int argc , const char *argv[]){

    if (argc!=2){
        printf("Errore passaggio parametri\n");
        return 1;
    }

    FILE *fp = fopen(argv[1],"r");

    list tabella[N];
    int i = 0;


    while (!feof(fp))
    {
           fscanf(fp,"%s %d",tabella[i].nome,&tabella[i].punteggio);
             i++;
            
    }

    fclose(fp);
    int k = 0;


     while (k!=i)

        {
            for (int j = 1; j < i-1; j++)
            {
                
            if (strcmp(tabella[k].nome,tabella[i].nome)>0)
            
            {
                printf("%s %d",tabella[k].nome,tabella[k].punteggio);
            }

            }
            
           
            
        }
   
    
    

    
}