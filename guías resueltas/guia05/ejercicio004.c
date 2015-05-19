#include <stdio.h>

int main(){
	double numero=0, base=0;
	double resultado=1;

	printf("Ingrese numero: ");
	scanf("%lg",&numero);
	
	if(numero<0){
		base = numero;
		while(numero<0){
			resultado *= (1/base);
			numero++;
		}
		printf("Resultado es: %lg\n",resultado);
	}
	else{
		base=numero;

		while(numero>0){
			resultado *= base;
			numero--;
		}
		printf("Resultado es: %lg\n",resultado);
	}

	
}