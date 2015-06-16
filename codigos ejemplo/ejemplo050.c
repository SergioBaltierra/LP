#include <stdio.h>

int main(){
	FILE *esc;
	char letra='a';
	
	if (!(esc=fopen("datos.dat","w"))) /* otra forma de controlar si se produce un error */
		printf("Error al abrir el fichero");
	else 
		fputc(letra,esc);
	
	fclose(esc);
}