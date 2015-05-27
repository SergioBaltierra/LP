#include <stdio.h>

#define MAX 5

int main(){
	int notas[MAX];
	int i;

	for(i=0;i<MAX;i++){
		notas[i]=i+1;
		printf("%d\n",notas[i]);
	}
}