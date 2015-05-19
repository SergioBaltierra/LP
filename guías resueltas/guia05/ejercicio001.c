#include <stdio.h>

int main(){
	int a,b,resultado=0;

	a=0;b=0;
	resultado  = (!a)||b;
	printf("%d %d = %d\n",a,b,resultado);
	
	a=0;b=1;
	resultado  = (!a)||b;
	printf("%d %d = %d\n",a,b,resultado);
	
	a=1;b=0;
	resultado  = (!a)||b;
	printf("%d %d = %d\n",a,b,resultado);
	
	a=1;b=1;
	resultado  = (!a)||b;
	printf("%d %d = %d\n",a,b,resultado);
}