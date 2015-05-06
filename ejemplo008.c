#include <stdio.h>

int main(){
	int a=1,b=2;
	int resultado;

	resultado = a>b;
	printf("%i\n",resultado);

	resultado = a<b;
	printf("%i\n",resultado);

	resultado = a>=b;
	printf("%i\n",resultado);

	resultado = a<=b;
	printf("%i\n",resultado);

	resultado = a==b;
	printf("%i\n",resultado);

	resultado = a!=b;
	printf("%i\n",resultado);
}