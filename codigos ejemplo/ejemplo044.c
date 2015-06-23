#include <stdio.h>

#define MAX 5

int main(){
	int *puntero;
	int arreglo[MAX]={3,1,5,2,4};
	int i;

	puntero=&arreglo[0];

	for(i=0;i<MAX;i++){
		printf("%d ",*puntero);
		puntero++;
	}
	printf("\n");
}