#include <stdio.h>

int main(){
	
	int dia;

	printf("Ingrese numero del dia de la semana: ");
	scanf("%d",&dia);

	switch(dia){
		case 1: printf("Lunes\n"); break;
		case 2: printf("Martes\n"); break;
		case 3: printf("Miercoles\n"); break;
		case 4: printf("Jueves\n"); break;
		case 5: printf("Viernes\n"); break;
		case 6: printf("Sabado\n"); break;
		case 7: printf("Domingo\n"); break;
		default: printf("No existe ese dia\n"); break;
	}
}