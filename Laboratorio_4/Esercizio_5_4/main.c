//
// Created by PHOENIX on 17/09/2021.
//

#include <stdio.h>
#define Z 20

int main (void){

    int a=0;
    int b=1;
    int c;
    int e = 0;

    c = a + b;
    printf("%d %d ",a,b);

    for (e=0;e<=Z ;e++){
        printf("%d ",c);
        a=b;
        b=c;
        c = a + b;

    }

}