#include <stdio.h>

int main(){
	long int i=1;
	long int totalPares=0, totalImpares=1;
	long int maximo=5000000000;

	for(i=1;i<=(long int)((maximo/2)-1);i++){
		totalPares = totalPares + i*2;
		totalImpares = totalImpares + (2*i+1);
	}

	totalPares = totalPares + maximo;

	printf("total pares %ld\n",totalPares);
	printf("total impares %ld\n",totalImpares);
}