#include <stdio.h>

int main(){
	int *puntero;
	int variable=3;

	puntero = &variable;

	printf("direccion: %p\n",puntero);
	printf("valor: %d\n",*puntero);
}