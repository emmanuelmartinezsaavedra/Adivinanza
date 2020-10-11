/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: yuris
 *
 * Created on 11 de octubre de 2020, 06:25 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int hora=time(NULL);
    int x,num,intentos,intentos2=10,jugar;
    srand(hora);
    
    
    printf("Adivine el numero que estoy pensando del 1 al 1000 \n");
    printf("Tienes 10 intentos\n");
    do{
        x=rand() % 1000;
        intentos=intentos2;
    do{
        if(jugar==1){
            printf("\nTienes %d intentos\n", intentos);
        }
        jugar--;
        scanf("%d",&num);
        if(num>x)
            printf("\tMenos\n");
        if(num<x)
            printf("\tMas\n");
        intentos--;
    }while((num!=x) && (intentos!=0));
    
    if(num!=x){
        printf("\n\nLo siento, ya no tiene más intentos\n");
        printf("Era el numero %d\n",x);
        intentos2++;
    }else{
        printf("\n¡Exelente adinivinaste el número!\n");
        intentos2--;
    }
    
    printf("\nLo quieres intentar de nuevo?\n");
    printf("1. Si\n");
    printf("2. No\n");
    scanf("%d", &jugar);
    }while(jugar==1);

    return (EXIT_SUCCESS);
}

