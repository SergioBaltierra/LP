#include <stdio.h>	// biblioteca standar I/O.

/*
	combinacion(n,k) = n! / (k! * (n-k)!)
*/

int main(){
	long i, j, niveles, n, k, n_k=0, copia_n=0, copia_k=0, opera_n=0, opera_k=0, opera_n_k=0, fact_k=1, fact_nk=1, fact_n=1;
	double coeficiente=0;

	printf("Ingrese niveles: ");
	scanf("%ld",&niveles);

	n=0;
	k=0;
	copia_n=n;
	copia_k=k;
	opera_n=n;
	opera_k=k;
	
	for(i=0;i<niveles;i++){
		for(j=i;j<niveles;j++){
			if(i==0)
				opera_k=0;

			opera_n_k = opera_n-opera_k;

			while(opera_k>0){
				fact_k *= opera_k;
				opera_k--;
			}

			while(opera_n_k>0){
				fact_nk *= opera_n_k;
				opera_n_k--;
			}

			while(opera_n>0){
				fact_n *= opera_n;
				opera_n--;
			}

			coeficiente = fact_n / (fact_k*fact_nk);
			printf("%3lg ",coeficiente);

			n++;
			k++;

			opera_n=n;
			opera_k=k;
			fact_n=1;
			fact_k=1;
			fact_nk=1;
		}
		n=++copia_n;
		k=copia_k;

		opera_n=n;
		opera_k=k;
		printf("\n");
	}
}