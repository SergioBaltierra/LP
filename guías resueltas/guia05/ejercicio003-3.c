#include <stdio.h>	// biblioteca standar I/O.

/*
	combinacion(n,k) = n! / (k! * (n-k)!)
*/

int main(){
	int i,j,aux_i,aux_j,niveles, n, k, n_k=0, copia_n=0, copia_k=0, copia_n_k=0, fact_k=1, fact_nk=1, fact_n=1;
	double coeficiente=0;

	//printf("Ingrese valores de n y k: ");
	//scanf("%d %d",&n,&k);

	printf("Ingrese niveles: ");
	scanf("%d",&niveles);

	n=0;
	k=0;
	copia_n=n;
	copia_k=k;
	
	for(i=0;i<niveles;i++){
		for(j=0;j<niveles;j++){	
			if(i==0)
				printf("C(%d,%d) - ",n,0);
			else
				printf("C(%d,%d) - ",n,k);
			
			n++;
			k++;
		}
		n=++copia_n;
		k=copia_k;
		printf("\n");
	}
		

		

}