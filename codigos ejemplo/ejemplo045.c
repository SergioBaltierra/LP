#include <stdio.h>

#define MAX 3

int main(){
	int *puntero;
	int arreglo[MAX][MAX]={9,1,8,2,7,3,6,4,5};
	int i, uno=1;

	puntero=&arreglo[0][0];

	for(i=0;i<MAX*MAX;i++){
		printf("%d ",*puntero);
		puntero+=uno;
	}
	printf("\n");
}