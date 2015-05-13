#include <stdio.h>

int main(){
	long int i=1;
	long int totalPares=0, totalImpares=0;
	long int maximo=5000000000;

	for(i=1;i<=maximo;i++){
		if(i%2==0)
			totalPares = totalPares + i;
		else
			totalImpares = totalImpares + i;
	}

	printf("total pares %ld\n",totalPares);
	printf("total impares %ld\n",totalImpares);
}