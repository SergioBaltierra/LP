#include <stdio.h>

int main(){
	FILE *lee;
	lee=fopen("datos.dat","r");
	
	if (lee == NULL)
 		printf("Error al abrir el fichero\n");
}