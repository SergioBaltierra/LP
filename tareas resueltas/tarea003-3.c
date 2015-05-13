/*
	Nombre: 
	RUN: 
	Tarea Número:

	Algoritmo: 
*/


#include <stdio.h>	// biblioteca standar I/O.

#define PI 3.14 	// declaramos constantes.

int main(){
	double a=4, copia_a = a, a_pp=0; 					// declaramos variables.
	a_pp=++a;											// copiamos ++a en variable a_pp para evitar warning producto del incremento en a.
	printf("%g\n",(-7.3667)+a_pp*PI-(-copia_a)*2/3+a--); // calulamos el resultado deseado (16) y lo mostramos por pantalla.
}