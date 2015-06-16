#include <stdio.h>

int main(){
	FILE *lee;
	char cad[80];

	if (!(lee=fopen("datos.dat","r"))) /* controlamos si se produce un error */
		printf("Error al abrir el fichero");
	else{
		fgets(cad,80,lee);
		printf("%s\n",cad);
		fclose(lee);
	}
}