#include <stdio.h>

int main(){
	char var_char;
	char var_string[10];
	int var_int;
	signed int var_signed_int;
	unsigned int var_unsigned_int;
	short int var_short_int;
	float var_float;
	double var_double;
	long var_long;
	signed long var_signed_long;
	unsigned long var_unsigned_long;
	long double var_long_double;

	printf("Escriba un caracter: ");
	scanf("%c", &var_char);
	printf("El caracter es: %c\n", var_char);

	printf("Escriba un string: ");
	scanf("%s", &var_string);
	printf("El string es: %s\n", var_string);

	printf("Escriba un entero: ");
	scanf("%i", &var_int);
	printf("El entero es: %i\n", var_int);

	printf("Escriba un entero con signo: ");
	scanf("%i", &var_signed_int);
	printf("El entero con signo es: %i\n", var_signed_int);

	printf("Escriba un entero sin signo: ");
	scanf("%u", &var_unsigned_int);
	printf("El entero sin signo es: %u\n", var_unsigned_int);

	printf("Escriba un entero corto: ");
	scanf("%hi", &var_short_int);
	printf("El entero corto es: %hi\n", var_short_int);

	printf("Escriba un numero tipo float: ");
	scanf("%f", &var_float);
	printf("El numero tipo float es: %f\n", var_float);

	printf("Escriba un numero tipo double: ");
	scanf("%g", &var_double);
	printf("El numero tipo double es: %g\n", var_double);

	printf("Escriba un numero tipo long: ");
	scanf("%ld", &var_long);
	printf("El numero tipo long es: %ld\n", var_long);

	printf("Escriba un numero tipo signed long: ");
	scanf("%ld", &var_signed_long);
	printf("El numero tipo signed long es: %ld\n", var_signed_long);

	printf("Escriba un numero tipo unsigned long: ");
	scanf("%lu", &var_unsigned_long);
	printf("El numero tipo unsigned long es: %lu\n", var_unsigned_long);

	printf("Escriba un numero tipo long double: ");
	scanf("%Lg", &var_long_double);
	printf("El numero tipo long double es: %Lg\n", var_long_double);
}