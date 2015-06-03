#include <stdio.h>

#define MAX 5

int main(){
	int *puntero;
	int arreglo[MAX]={1,2,3,4,5};
	int i;

	puntero=&arreglo[0];

	for(i=0;i<MAX;i++)
		printf("%d ",(*puntero)+i);

	printf("\n");
}