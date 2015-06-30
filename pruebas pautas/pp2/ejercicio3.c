#include <stdio.h>	// biblioteca standar I/O.

int main(){
	int run,dv,d1,d2,d3,d4,d5,d6,d7,d8,suma=0,verificar=0;

	printf("Ingrese run sin puntos sin digito verificador: ");
	scanf("%d",&run);

	printf("Ingrese digito verificador, si termina en k, reemplacelo por un 10: ");
	scanf("%d",&dv);

	d1=run%10;
	run-=d1;
	run/=10;
	
	d2=run%10;
	run-=d2;
	run/=10;

	d3=run%10;
	run-=d3;
	run/=10;

	d4=run%10;
	run-=d4;
	run/=10;

	d5=run%10;
	run-=d5;
	run/=10;

	d6=run%10;
	run-=d6;
	run/=10;

	d7=run%10;
	run-=d7;
	run/=10;

	d8=run;

	suma = d1*2+d2*3+d3*4+d4*5+d5*6+d6*7+d7*2+d8*3;
	verificar = 11 - (suma%11);

	if(dv==10 && verificar==10)
		printf("Digito verificador es correcto\n");
	else if(dv==0 && verificar == 11)
		printf("Digito verificador es correcto\n");
	else if(dv == 1 && verificar == 1)
		printf("Digito verificador es correcto\n");
	else if(dv == 2 && verificar == 2)
		printf("Digito verificador es correcto\n");
	else if(dv == 3 && verificar == 3)
		printf("Digito verificador es correcto\n");
	else if(dv == 4 && verificar == 4)
		printf("Digito verificador es correcto\n");
	else if(dv == 5 && verificar == 5)
		printf("Digito verificador es correcto\n");
	else if(dv == 6 && verificar == 6)
		printf("Digito verificador es correcto\n");
	else if(dv == 7 && verificar == 7)
		printf("Digito verificador es correcto\n");
	else if(dv == 8 && verificar == 8)
		printf("Digito verificador es correcto\n");
	else if(dv == 9 && verificar == 9)
		printf("Digito verificador es correcto\n");
	else
		printf("Digito verificador no es correcto\n");

}