#include <stdio.h>

int main(){
	int *puntero;
	int variable=3;

	puntero = &variable;
	printf("variable: %d\n",variable);
	printf("puntero direccion: %p\n",puntero);
	printf("puntero valor: %d\n",*puntero);
	
	variable=4;
	printf("variable: %d\n",variable);
	printf("puntero direccion: %p\n",puntero);
	printf("puntero valor: %d\n",*puntero);

	*puntero = 0;
	printf("variable: %d\n",variable);
	printf("puntero direccion: %p\n",puntero);
	printf("puntero valor: %d\n",*puntero);
}