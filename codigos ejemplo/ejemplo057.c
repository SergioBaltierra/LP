#include <stdio.h>

int main(){
	FILE *lee;
	char nombre[10];
	int edad;

	if(!(lee=fopen("datos.dat","r"))) /* controlamos si se produce un error */
		printf("Error al abrir el fichero");
	else{
		fscanf(lee,"%s %2d",nombre,&edad);
		printf("Nombre: %s  Edad: %d\n",nombre,edad);
		fclose(lee);
	}
}