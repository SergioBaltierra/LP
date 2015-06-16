#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *esc;
	int num=3;
	
	if (!(esc=fopen("datos.dat","wb"))) /* controlamos si se produce un error */
		printf("Error al abrir el fichero");
	else{
		fputw(num,esc); /* tambien se puede haber hecho directamente: fputw(3,esc); */
		fclose(esc);
	}
}