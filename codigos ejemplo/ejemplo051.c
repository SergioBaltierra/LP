#include <stdio.h>

int main(){
	FILE *lee;
	char letra;

	if (!(lee=fopen("datos.dat","r"))) /* controlamos si se produce un error */
		printf("Error al abrir el fichero");
	else{
		letra=fgetc(lee);
		printf("%c\n",letra);
		fclose(lee);
	}
}