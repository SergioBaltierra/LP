#include <stdio.h>

int main(){
	double a=4;

	printf("%g\n",1+(++a)*3,14-(-a-2)*2/3+(a--));

	printf("%g\n",-9.3667+(++a)*3.14-(-a-2)*2/3+(a--));
}