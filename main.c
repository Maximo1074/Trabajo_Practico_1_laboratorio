/*
 * test.c
 *
 *  Created on: 14 abr. 2021
 *      Author: maxim
 */
#include <stdio.h>
#include <stdlib.h>
#include "CargarDatos.h"
#include "Operaciones.h"

int main() {
	setvbuf(stdout, NULL, _IONBF, BUFSIZ);

		char salir = 'n';
	    float primerNumero;
	    float segundoNumero;
	    int flagPrimerNumero = 0;
	    int flagSegundoNumero = 0;
	    int flagCalculos = 0;

	    do{

	        switch(menu(primerNumero,segundoNumero)){
	    case 1:
	        primerNumero = cargarOperandos();
	        flagPrimerNumero = 1;
	        break;
	    case 2:
	        if(flagPrimerNumero ){
	           segundoNumero = cargarOperandos();
	            flagSegundoNumero = 1;
	        }
	        else{
	            printf("Primero tendrias que poner el primer operando \n");
	        }
	        break;
	    case 3:
	        if(flagPrimerNumero && flagSegundoNumero ){
	            sumar(primerNumero,segundoNumero);
	            restar(primerNumero,segundoNumero);
	            dividir(primerNumero,segundoNumero);
	            multiplicar(primerNumero,segundoNumero);
	            factorizar(primerNumero);
	            factorizar(segundoNumero);
	            flagCalculos = 1;
	            printf("Se ha completado todas las operaciones\n");
	        }
	        else{
	            printf("No puedes comenzar a hacer las operaciones sin cargar todos los operandos \n");
	        }
	        break;

	    case 4:
	        if(flagCalculos ){
	            printf("El resultado de la suma a: %.2f + b: %.2f es %.2f \n",primerNumero, segundoNumero, sumar(primerNumero,segundoNumero));
	            printf("El resultado de la resta a: %.2f - b: %.2f es %.2f \n",primerNumero, segundoNumero, restar(primerNumero,segundoNumero));
	            printf("El resultado de la division a: %.2f / b: %.2f es %.2f \n",primerNumero, segundoNumero, dividir(primerNumero,segundoNumero));
	            printf("El resultado de la multiplicacion a: %.2f * b: %.2f es %.2f \n",primerNumero, segundoNumero, multiplicar(primerNumero,segundoNumero));
	            printf("El factorial de A: %d \n",factorizar(primerNumero));
	            printf("El factorial de B: %d \n",factorizar(segundoNumero));
	            flagPrimerNumero = 0;
	            flagSegundoNumero = 0;
	            flagCalculos = 0;
	        }else{
	            printf("No podes podes mostrar resultados de los calculos si no los hiciste primero \n");
	        }
	        break;

	    case 5:
	        printf("Estas seguro que desea salir? (s/n): ");
	        fflush(stdin);
	        salir = getchar();
	        break;
	    default:
	        printf("Opcion incorrecta\n");
	        break;
	        }

	    }while(salir == 'n');

	return 0;
}
