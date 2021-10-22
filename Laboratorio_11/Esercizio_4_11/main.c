//
// Created by PHOENIX on 21/09/2021.
//

#include <stdio.h>
#include <string.h>
#define N 80
#define M 20

typedef struct treni {

    char city_p[M];
    float orario_p;
    char city_a[M];
    float orario_a;

}Treni;


int main (int argc,const char * argv[]){

    Treni stazioni[N];
    char city_p[M],city_a[M];
    float orario_p,orario_a;
    int count_p=0,count_a=0;

    if (argc!=3){
        printf("Errore nel passsaggio dei parametri");
        return 0;
    }

    FILE * f;
    f=fopen(argv[1],"r");

    if(f==NULL){
        printf("Il file non e' stato aperto correttamente\n");
        return 1;
    }

    for (int i = 0; !feof(f) ; ++i) {
        fscanf(f,"%s %f %s %f",stazioni[i].city_p,&stazioni[i].orario_p,stazioni[i].city_a,&stazioni[i].orario_a);
        if (strcmp(argv[2],stazioni[i].city_p)==0){
            count_p++;
        }else if (strcmp(argv[2],stazioni[i].city_a)==0){
            count_a++;
        }
    }

    fclose(f);

    printf("Dalla city di %s ci sono :\n"
           "%d treni in partenza\n"
           "%d treni in arrivo\n",argv[2],count_p,count_a);


}