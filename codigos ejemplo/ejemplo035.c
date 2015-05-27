#include <stdio.h>

#define FILA 5
#define COLUMNA 4

int main(){
	int notas[FILA][COLUMNA] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int i, j;

	for(i=0;i<FILA;i++){
		for(j=0;j<COLUMNA;j++)
			printf("%2d ",notas[i][j]);
		printf("\n");
	}
}