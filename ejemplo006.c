#include <stdio.h>

int main(){
	int a=9;
	int b=3;
	int copia=a;

	a+=b;
	printf("%d\n",a);
	
	a=copia;
	a-=b;
	printf("%d\n",a);
	
	a=copia;
	a*=b;
	printf("%d\n",a);
	
	a=copia;
	a/=b;
	printf("%d\n",a);
	
	a=copia;
	a%=b;
	printf("%d\n",a);
}