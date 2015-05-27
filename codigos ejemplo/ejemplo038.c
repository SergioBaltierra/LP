#include <stdio.h>	// biblioteca standar I/O.

int main(){
	char arreglo_caracteres[22] = "Arreglo de caracteres.";
	char cadena_caracteres[22] = "Cadena de caracteres.\0";

	printf("%s\n",arreglo_caracteres);
	printf("%s\n",cadena_caracteres);
}