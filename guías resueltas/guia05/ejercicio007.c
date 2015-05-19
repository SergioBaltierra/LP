#include <stdio.h>	// biblioteca standar I/O.

int main(){
	int multiplicando, multiplicador, cando=0, cador=0, resultado=0;

	printf("Ingrese multiplicando y multiplicador: ");
	scanf("%d %d",&multiplicando,&multiplicador);

	//printf("%d %d\n",multiplicando,multiplicador);

	if(multiplicando%2!=0){
		resultado+=multiplicador;
	}

	while(multiplicando!=1){
		cando = multiplicando/2;
		cador = multiplicador*2;

		if(cando%2!=0){
			resultado+=cador;
		}

		multiplicando/=2;
		multiplicador*=2;
	}

	printf("Resultado es: %d\n",resultado);
}