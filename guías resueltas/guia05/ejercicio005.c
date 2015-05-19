#include <stdio.h>

int main(){
	long int numero=0, resto=0, numero_inv=0;

	printf("Ingrese numero: ");
	scanf("%ld",&numero);
	
	numero_inv=0;

	while(numero!=0){
		resto=numero%10;
		numero_inv=numero_inv+resto;
		numero_inv*=10;
		numero/=10;
	}
	numero_inv/=10;
	

	printf("%ld\n",numero_inv);
	
}