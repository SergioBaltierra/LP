#include <stdio.h>

#define MAX 3

int main(){
	int *puntero;
	int arreglo[MAX][MAX]={1,2,3,4,5,6,7,8,9};
	int i;

	puntero=&arreglo[0][0];

	for(i=0;i<MAX*MAX;i++)
		printf("%d ",(*puntero)+i);

	printf("\n");
}