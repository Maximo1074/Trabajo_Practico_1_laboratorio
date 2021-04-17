/*
 * CargarDatos.h
 *
 *  Created on: 14 abr. 2021
 *      Author: maxim
 */

#ifndef CARGARDATOS_H_
#define CARGARDATOS_H_
/** \brief un menu de opciones que toma dos operandos
 *
 * \param operando1 float primer operando que sera tomado para interactuar con el menu.
 * \param operando2 float segundo operando que sera tomado para interactuar con el menu.
 * \return int al elegir un numero del 1 al 5 devolvera el numero seleccionado y se hara una accion del menu.
 *
 */
int menu(float operando1, float operando2);
/** \brief una funcion que se utiliza para pedirle al usuario que escriba un numero para que sea operado en el menu
 *
 * \return float el numero al cual sera utilizado como operando en el menu
 *
 */
float cargarOperandos();

#endif /* CARGARDATOS_H_ */
