#include <iostream>
#define SIZE 10
#include <stdio.h>
#include <stdlib.h>
#include "array.h"

void menu(){
    printf("1- wprowadz wartosci do tabeli\n");
    printf("2- pokaz tabele\n");
    printf("3- znajdz Max\n");
    printf("4- znajdz Min\n");
    printf("5- znajdz Srednia\n");
    printf("6- Stop\n");
}

int main(){

    int tab[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int option = 0;
    int min;
    int max;
    float srednia;
    do{
        menu();
        printf("wybiez - ");
        scanf("%d", &option);
        switch(option){
            case 1: enterValue(tab);
                break;
            case 2: printArray(tab);
                break;
            case 3:
                max = FindMax(tab);
                printf("max = %i\n", max);
                break;
            case 4:
                min = FindMin(tab);
                printf("min = %i\n", min);
                break;
            case 5:
                srednia = FindAverage(tab);
                printf("srednia = %f\n", srednia);
                break;
            case 6:
                break;
        }

    }while (option != 6);
}