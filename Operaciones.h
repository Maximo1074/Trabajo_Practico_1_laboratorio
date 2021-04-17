/*
 * Operaciones.h
 *
 *  Created on: 14 abr. 2021
 *      Author: maxim
 */

#ifndef OPERACIONES_H_
#define OPERACIONES_H_

/** \brief una de las operaciones del menu que suma los dos operandos del menu
 *
 * \param a float el primer operando que se utiliza para la suma.
 * \param b float  el segundo operando que se utiliza para la suma.
 * \return float  devuelve el resultado la suma de los dos operandos.
 *
 */
float sumar(float a, float b);
/** \brief una de las operaciones del menu que resta los dos operandos del menu
 *
 *
 * \param a float el primer operando que se utiliza para la resta.
 * \param b float el segundo operando que se utiliza para la resta.
 * \return float devuelve el resultado de la resta de los dos operandos.
 *
 */
float restar(float a, float b);
/** \brief una de las operaciones del menu que multiplica los dos operandos del menu
 *
 * \param a float el primer operando que se utiliza para la multiplicacion.
 * \param b float el segundo operando que se utiliza para la multiplicacion.
 * \return float devuelve el resultado de la multiplicacion de los dos operandos.
 *
 */
float multiplicar(float a, float b);
/** \brief una de las operaciones del menu que divide los dos operandos del menu
 *
 * \param a float el primer operando que se utiliza para la division.
 * \param b float el segundo operando que se utiliza para la division.
 * \return float devuelve el resultado de la division de los dos operandos.
 *
 */
float dividir(float a, float b);
/** \brief una de las operaciones que toma a uno de los operandos para hacer la factorizacion
 *
 * \param n float el operando que va a ser factorizado
 * \return int devuelve el resultado de la factorizacion.
 *
 */
int factorizar(float n);

#endif /* OPERACIONES_H_ */
