/*
	Algoritmo: ejercicio 4 busca si una palabra es un palindromo.
*/

#include <stdio.h>

#define MAX 9

int main(){
	char palabra[MAX]="reconocer";
	int i=0;
	int bandera=1;
	while((i < (int) (MAX/2)) && (bandera!=0)){
		if(palabra[i]!=palabra[MAX-i-1])
			bandera=0;
		
		i++;
	}

	bandera==1 ? printf("Es palindromo\n") : printf("No es palindromo\n");
}