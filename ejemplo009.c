#include <stdio.h>

int main(){
	int a=0,b=0,c=1,d=1;
	int resultado;

	resultado = (a&&b)||(c||d);
	printf("%i\n",resultado);

	resultado = (a&&b)||(!(c||d));
	printf("%i\n",resultado);

	resultado = (!(a&&b))||(c||d);
	printf("%i\n",resultado);

	resultado = (a&&(!b))||(c||d);
	printf("%i\n",resultado);
}