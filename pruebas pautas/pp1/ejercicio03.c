#include <stdio.h>	// biblioteca standar I/O.

int main(){
	long int numero=2;
	int divisor=2;
	int suma=0;
	long int binario=0;
	long int resto=0;
	long int k=1;

	for(numero=2;numero<=100;numero++){

		while(numero%divisor!=0 && numero>divisor)
			divisor++;

		if(divisor==numero)
			suma+=numero;
		
		divisor=2;
	}

	printf("%d\n",suma);

	while(suma!=0){
		resto=suma%2;
		resto*=k;
		binario+=resto;
		suma/=2;
		k*=10;
	}

	printf("%ld\n",binario);
}