/*
 * Operaciones.c
 *
 *  Created on: 14 abr. 2021
 *      Author: maxim
 */
#include "Operaciones.h"
#include <stdio.h>

float sumar(float a, float b){
    return a + b;
}

float restar(float a, float b){
    return a - b;
}

float multiplicar(float a, float b){
    return a * b;
}

float dividir(float a, float b){
    float division;
    if(b != 0){
        division = a / b;
    }
    else{
        printf("No es posible dividir por cero\n");
    }
    return division;
}

int factorizar(float n){

    int fact = 1;
    for(int i = 1; i <= n; i++){

        fact *= i;
    }

    return fact;
}

