#include <stdio.h>

int main(){
	char var_char = 'a';
	char var_string[] = "Hola Mundo";
	int var_int=32768;
	signed int var_signed_int=-32767;
	unsigned int var_unsigned_int=65535;
	short int var_short_int=32768;
	float var_float=3.4;
	double var_double=1.7;
	long var_long=2147438647;
	signed long var_signed_long=-2147483648;
	unsigned long var_unsigned_long=4294967295;
	long double var_long_double=3.4;

	printf("%c\n", var_char);
	printf("%s\n", var_string);
	printf("%i\n", var_int);
	printf("%i\n", var_signed_int);
	printf("%u\n", var_unsigned_int);
	printf("%hi\n", var_short_int);
	printf("%f\n", var_float);
	printf("%g\n", var_double);
	printf("%ld\n", var_long);
	printf("%ld\n", var_signed_long);
	printf("%lu\n", var_unsigned_long);
	printf("%Lg\n", var_long_double);
}