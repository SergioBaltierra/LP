#include <stdio.h>

int main(){
	FILE *esc;
	char nombre[]="Santiago";
	int edad=34;
	
	if(!(esc=fopen("datos.dat","w"))) /* controlamos si se produce un error */
		printf("Error al abrir el fichero");
	else{
		fprintf(esc,"%s %2d",nombre,edad);
		fclose(esc);
	}
}