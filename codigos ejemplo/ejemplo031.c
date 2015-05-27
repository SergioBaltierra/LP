#include <stdio.h>

#define MAX 5

int main(){
	int notas[MAX];
	int i;

	for(i=0;i<MAX;i++)
		scanf("%d",&notas[i]);
	
	for(i=0;i<MAX;i++)
		printf("%d\n",notas[i]);
}