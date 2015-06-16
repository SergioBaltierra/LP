#include <stdio.h>

int main(){
	FILE *esc;
	char cad[]="Hola Mundo.";
	
	if (!(esc=fopen("datos.dat","w"))) /* controlamos si se produce un error */
		printf("Error al abrir el fichero");
	else{
		fputs(cad,esc); /* o también así: fputs("Hola Mundo.",esc); */
		fclose(esc);
	}
}