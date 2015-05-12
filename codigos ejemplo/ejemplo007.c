#include <stdio.h>

int main(){
	int a=10;
	int total=0;
	int copia=a;

	total = a++;
	printf("%d\n",total);

	a=copia;
	total = ++a;
	printf("%d\n",total);

	a=copia;
	total = a--;
	printf("%d\n",total);

	a=copia;
	total = --a;
	printf("%d\n",total);
}