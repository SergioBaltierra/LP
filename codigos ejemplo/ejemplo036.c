#include <stdio.h>

#define FILA 5
#define COLUMNA 4

int main(){
	int notas[FILA][COLUMNA];
	int i, j, k=1;

	for(i=0;i<FILA;i++){
		for(j=0;j<COLUMNA;j++)
			notas[i][j]=k++;
	}

	for(i=0;i<FILA;i++){
		for(j=0;j<COLUMNA;j++)
			printf("%2d ",notas[i][j]);
		printf("\n");
	}
}