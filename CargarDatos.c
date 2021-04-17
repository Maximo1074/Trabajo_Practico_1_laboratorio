/*
 * CargarDatos.c
 *
 *  Created on: 14 abr. 2021
 *      Author: maxim
 */
#include "CargarDatos.h"
#include <stdio.h>
int menu(float operando1, float operando2){

    int opcion;
    printf("Bienvenido a la calculadora \n\n");
    printf("    ***** Menu de opciones *****    \n\n");
    printf("hay que ingresar valores para A:x y B:y\n\n");
    printf("1- Cargar el primer operando (A:%.3f)\n",operando1);
    printf("2- Cargar el segundo operando (B:%.3f)\n",operando2);
    printf("3- Hacer todas las operaciones\n");
    printf("    a)calcular la suma (A + B)\n");
    printf("    b)calcular la resta (A - B)\n");
    printf("    c)calcular la division (A / B)\n");
    printf("    d)calcular la multiplicacion (A * B)\n");
    printf("    e)calcular el factorial (A!)\n");
    printf("    f)calcular el factorial (B!)\n");
    printf("4- Mostrar los resultados\n");
    printf("5- Salir\n");
    printf("\nIngrese una opcion: ");
    fflush(stdin);
    scanf("%d",&opcion);
    return opcion;
}

float cargarOperandos(){

    float operando;

    printf("Ingrese el operando: ");
    scanf("%f",&operando);

    return operando;
}

